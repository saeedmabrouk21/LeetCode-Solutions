class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
                return -1;
        return BFS(0,0,grid);
    }
    int BFS (int x , int y ,vector<vector<int>> grid){
            int n = grid.size();
           vector<vector<bool>> vi(n,vector<bool>(n,false));
            queue<pair<int,pair<int,int>>> queue;
            pair<int,pair<int,int>>s={1,{x,y}};
            vi[s.second.first][s.second.second] = true;
            queue.push(s);
            vector<pair<int,int>>d{
                {-1,0},{0,-1},{1,0},{0,1},{-1,-1},{-1,1},{1,-1},{1,1},
            };
            while(!queue.empty())
            {
                s = queue.front();
                if(s.second.first==n-1 && s.second.second==n-1)
                    return s.first;
                queue.pop();
                x=s.second.first;y=s.second.second;
                for(int i = 0 ; i < 8 ; i++){
                    int xx=x+d[i].first;
                    int yy = y+d[i].second;
                    if(xx>=0 &&xx <n &&yy>=0 &&yy <n &&grid[xx][yy]==0&&vi[xx][yy]==0 ){
                        vi[xx][yy]=1;
                         queue.push({s.first+1,{xx,yy}});
                    }
                }
              
            }
        
        return -1;
        
    }
};