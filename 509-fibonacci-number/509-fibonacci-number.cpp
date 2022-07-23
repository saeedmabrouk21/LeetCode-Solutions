class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return h3(n,dp);    
    }
    //1 1  2 3 
    int h3(int n,vector<int>&dp){
        if(n==2)
            return 1;
        if(n<2)
            return n;
        
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=h3(n-1,dp)+h3(n-2,dp);
        
    }
    
};