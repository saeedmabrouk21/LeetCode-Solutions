class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=0;
        vector<bool>vi(rooms.size(),false);
        DFS(rooms,vi,n,0);
        
        if(n==rooms.size())
            return true;
        return false;
    }
    void DFS(vector<vector<int>>& rooms,vector<bool>&vi,int&n,int j){
        vi[j]=1;
        n++;
        for(auto x:rooms[j]){
            cout <<j<<" "<< x<<endl;
            if(vi[x]==0)
                DFS(rooms,vi,n,x);
        }
        
    }
};