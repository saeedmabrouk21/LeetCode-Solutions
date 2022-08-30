class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        vector<int> suml(nums.size(),0);
        vector<int> sumr(nums.size(),0);
        suml[0]=0;
        for(int i = 1 ; i < nums.size();i++){
            suml[i]=nums[i-1]+suml[i-1];
        }
        sumr[nums.size()-1]=0;
        for(int i = nums.size()-2 ; i >=0;i--){
            sumr[i]=nums[i+1]+sumr[i+1];
        }
        for(int i = 0 ; i < nums.size();i++){
            if(suml[i]==sumr[i])
                return i;
        }
        return -1;
    }
};