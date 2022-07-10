class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {   
        vector<int> dp(cost.size(),-1);
        return min(h3(cost,cost.size()-1,dp),h3(cost,cost.size()-2,dp));
    
    }
        int h3(vector<int>&cost,int s,vector<int>&dp){
        if(s<0)
            return 0;
        if(dp[s]!=-1)
            return dp[s];
        int cos=cost[s];
        return dp[s]=cos+min(h3(cost,s-1,dp),h3(cost,s-2,dp));
        
    }
};
