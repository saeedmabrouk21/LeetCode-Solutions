class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> ab (n);
        for(int i = 0 ; i < manager.size();i++){
            if(manager[i]!=-1)
                ab[manager[i]].push_back(i);
        }
        return dfs(ab,informTime,headID);
    }
    int dfs(vector<vector<int>> &ab,vector<int>& in,int head){
        int maxx= 0;
        for(auto x : ab[head]){
            int tt=dfs(ab,in,x);
            if(tt>maxx){
                maxx=tt;
            }
        }
        return in[head]+maxx;
    }
    
};