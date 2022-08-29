class Solution {
public:
    int minimumTotal(vector<vector<int>>& tr) {
        if(tr.size()==1){
            return tr[0][0];
        }
        
        vector<vector<int>> dp (tr.size(),vector<int>(tr[tr.size()-1].size(),-1));
        return tr[0][0]+min(mi(tr,1,0,dp),mi(tr,1,1,dp));
    }
    int mi(vector<vector<int>>& tr,int i , int j ,vector<vector<int>>&dp){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==tr.size()-1){
            return dp[i][j]=tr[i][j];
        }
        return dp[i][j]=tr[i][j]+min(mi(tr,i+1,j,dp),mi(tr,i+1,j+1,dp));
    }
};