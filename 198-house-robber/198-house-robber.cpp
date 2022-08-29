class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        return max(nums[0]+robb(nums,2,dp),robb(nums,1,dp));
    }
    int robb(vector<int>&nums,int i,vector<int>&dp){
        if(dp[i]!=-1)
            return dp[i];
        if(nums.size()-i<=0){
            cout<<"da";
            return dp[i]=0;
        }
        if(nums.size()-i==1){
            return dp[i]=nums[i];
        }
        if(nums.size()-i==2){
            return dp[i]=max(nums[i],nums[i+1]);
        }
        
        return dp[i]=max(nums[i]+robb(nums,i+2,dp),robb(nums,i+1,dp));
        
        
    }
};