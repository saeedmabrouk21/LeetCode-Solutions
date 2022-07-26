struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> aa;
        unordered_set<vector<int>,hashFunction>ss;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                    int target = 0-nums[i];
                cout <<"###"<<i;
                    int f=i+1;
                    vector<int> ad{nums[i],nums[f],0-nums[i]-nums[f]};
                    while(ss.count(ad)==1)
                        f++;
                    int e=nums.size()-1;
                    while(true){
                        if(nums[f]+nums[e]==target){
                            vector<int> ab{nums[i],nums[f],nums[e]};
                            sort(ab.begin(),ab.end());
                            if(ss.count(ab)==0){
                                cout<<i<<f<<e;
                                aa.push_back(ab);
                                ss.insert(ab);
                            }
                            f++;
                            e=nums.size()-1;

                        }else if(nums[f]+nums[e]>target){
                            e--;
                        }else{
                            f++;       
                        }  
                        if(e==f||f==nums.size()-1){
                            break;        
                        }
                    }   
            }
        }
         return aa; 
    }
};