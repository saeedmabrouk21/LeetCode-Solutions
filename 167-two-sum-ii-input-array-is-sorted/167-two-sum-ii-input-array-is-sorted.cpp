class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int f=0;
        int e=nums.size()-1;
        while(f<e){
            if(nums[f]+nums[e]==target){
                
                return {++f,++e};
            }
            if(nums[f]+nums[e]>target)
                e--;
            else 
                f++;
        }
        return{};
    }
};