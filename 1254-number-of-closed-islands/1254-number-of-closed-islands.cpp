class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
         int x =grid.size();
        int y =grid[0].size();
        
        int z =0;
        int yy=0;
        vector<vector<bool>> ab(x,vector<bool>(y,0));
        for(int i = 0;i<x;i++){
            for(int j = 0 ; j<y;j++){
                
                if(grid[i][j]==0&& ab[i][j]==0 ){
                    z=0;
                    dfs(grid,ab,i,j,z);
                    if(z==0)
                        yy++;
                }
            }
        }
        return yy;
    }
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>&ab,int i,int j,int &z){
        ab[i][j]=1;
        if(i==0 || i ==grid.size()-1 ||j==0 ||j==grid[0].size()-1)
            z=1;
        if(i+1<grid.size()&&grid[i+1][j]==0&&ab[i+1][j]==0)dfs(grid,ab,i+1,j,z);
        if(j+1<grid[0].size()&&grid[i][j+1]==0&&ab[i][j+1]==0)dfs(grid,ab,i,j+1,z);
        if(i-1>=0&&grid[i-1][j]==0&&ab[i-1][j]==0)dfs(grid,ab,i-1,j,z);
        if(j-1>=0&&grid[i][j-1]==0&&ab[i][j-1]==0)dfs(grid,ab,i,j-1,z);

        return;
    }
};


