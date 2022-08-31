class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>perfix;
        DFS(graph,ans,perfix,0);
        return ans;
    }
    void DFS(vector<vector<int>> &graph,vector<vector<int>>&ans,vector<int>&perfix,int i){
        perfix.push_back(i);
        if(i==graph.size()-1){
            ans.push_back(perfix);
            perfix.pop_back();
            return;
        }
       
        for(int j = 0 ; j < graph[i].size();j++){
            DFS(graph,ans,perfix,graph[i][j]);             
        }
        perfix.pop_back();
    }
    
};