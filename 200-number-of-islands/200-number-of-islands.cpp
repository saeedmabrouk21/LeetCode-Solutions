class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int x =grid.size();
        int y =grid[0].size();
        
        int z =0;
        vector<vector<bool>> ab(x,vector<bool>(y,0));
        for(int i = 0;i<x;i++){
            for(int j = 0 ; j<y;j++){
                
                if(grid[i][j]=='1'&& ab[i][j]==0 ){
                    z++;
                    dfs(grid,ab,i,j);
                }
            }
        }
        return z;
    }
void dfs(vector<vector<char>>& grid,vector<vector<bool>>&ab,int i,int j){
        ab[i][j]=1;
        
        if(i+1<grid.size()&&grid[i+1][j]=='1'&&ab[i+1][j]==0)dfs(grid,ab,i+1,j);
        if(j+1<grid[0].size()&&grid[i][j+1]=='1'&&ab[i][j+1]==0)dfs(grid,ab,i,j+1);
        if(i-1>=0&&grid[i-1][j]=='1'&&ab[i-1][j]==0)dfs(grid,ab,i-1,j);
        if(j-1>=0&&grid[i][j-1]=='1'&&ab[i][j-1]==0)dfs(grid,ab,i,j-1);
        return;
    }
};