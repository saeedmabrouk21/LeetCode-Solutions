class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int numOfCaples = connections.size();
        if(numOfCaples < n-1){
            return -1;
        }
       
        vector<vector<int>> adj(n);
        for(auto v : connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n, false);
        int cl = 0 ;
        
        for(int i = 0 ; i < n ;i++){
            if(visited[i]==false){
                cl++;
                stack<int> ab;
                ab.push(i);
                cout<<i<<" ";
                visited[i]= true;
                while(!ab.empty()){
                    
                    int cc = ab.top();ab.pop();
                    for(int j = 0 ; j < adj[cc].size();j++){
                        if(visited[adj[cc][j]]==false){
                            cout<<j;
                            visited[adj[cc][j]]=true;
                            ab.push(adj[cc][j]);
                            
                            }
                    }
                    
                }
            }
            
        }
        return cl-1;
    }
};