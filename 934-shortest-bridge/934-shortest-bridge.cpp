class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int,int>>q;
        int arr[4][2]={
            {1,0},
            {0,1},
            {-1,0},
            {0,-1}
        };
        int j;
        int eq=-5;
        for(int i = 0 ;i < n ;i++){
            for(j = 0 ;j < n ; j++){
                if(grid[i][j]==1){
                    DFS(i,j,grid,q, arr,eq);
                    if(eq==-2) break;
                    eq=-2;                    
                }
            }
            if(j!=n) break;
        }

     
        pair<int,int>s;
        while(!q.empty()){
            s=q.front();
            q.pop();
            int x= s.first;int y=s.second;
            
            for(int i = 0 ; i < 4 ;i++){
                if(x+arr[i][0]>=0 &&x+arr[i][0]<grid.size()&&y+arr[i][1]>=0 &&y+arr[i][1]<grid.size()&&grid[x+arr[i][0]][y+arr[i][1]]!=-1){
                   // cout<<"dad"<<grid[x+arr[i][0]][y+arr[i][1]]<<endl;
                    if(grid[x+arr[i][0]][y+arr[i][1]]==0){
                        if(grid[x][y]==-5 )
                            grid[x+arr[i][0]][y+arr[i][1]]=1;
                        else   
                            grid[x+arr[i][0]][y+arr[i][1]]=grid[x][y]+1;
                        q.push({x+arr[i][0],y+arr[i][1]});
                    }else if(grid[x+arr[i][0]][y+arr[i][1]]==-2){
                        return grid[x][y];
                    }
                }
            }
            
            grid[x][y]=-1;
             
        }
        return 999;
    }
    void DFS(int x, int y ,vector<vector<int>>& grid,queue<pair<int,int>>&q,int arr[4][2],int eq){
        // cout<<x<<y<<eq;
        grid[x][y]=eq;
        if(eq==-5)q.push({x,y});
        
        for(int i = 0 ; i < 4 ;i++){
            if(x+arr[i][0]>=0 &&x+arr[i][0]<grid.size()&&y+arr[i][1]>=0 &&y+arr[i][1]<grid.size() &&grid[x+arr[i][0]][y+arr[i][1]]==1){
                DFS(x+arr[i][0],y+arr[i][1],grid,q,arr,eq);
            }
        }
        return ;
        
    }
};