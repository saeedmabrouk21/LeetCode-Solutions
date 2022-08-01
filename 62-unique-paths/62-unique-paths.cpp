class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m,vector<int>(n,-1));
        pair<int,int>i;
        i=make_pair(m-1,n-1);
        return cal(dp,i);
    }
    int cal(vector<vector<int>>& dp ,pair<int,int>p){
        if(p==make_pair(0,0))
            return 1;
        if(p==make_pair(0,1))
            return 1;
        if(p==make_pair(1,0))
            return 1;
        if(dp[p.first][p.second]!=-1)
            return dp[p.first][p.second];
        
        pair<int,int>i,j;
        i=make_pair(p.first-1,p.second);
        j=make_pair(p.first,p.second-1);
        
        if(p.first-1<0){
            return dp[p.first][p.second]=cal(dp,j);
        }
        if(p.second-1<0){
            return dp[p.first][p.second]=cal(dp,i);
        }
        return dp[p.first][p.second]=cal(dp,i)+cal(dp,j);
    }
};