class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int max = -99999;int lastp=0;
          for(int i = 0 , sum=0; i < nums.size();i++){
              
              if(nums[i]>sum &&sum<0){
                    sum=nums[i];
                    //nums.erase(nums.begin(),nums.begin()+i);
                    for(int j = lastp ; j < i;j++){
                        nums[j]=0;
                        lastp=i-1;
                    }
            }
                
                else{
                    //cout<<nums[i];
                    sum+=nums[i];
                }
                if(sum>max)
                    max = sum;
          }
        
        return max;
}
};
