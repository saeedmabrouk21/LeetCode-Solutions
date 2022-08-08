
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
         int x =grid.size();
        int y =grid[0].size();
        
        int z =0;
        int yy=0;
        int vv=0;
        vector<vector<bool>> ab(x,vector<bool>(y,0));
        for(int i = 0;i<x;i++){
            for(int j = 0 ; j<y;j++){
                
                if(grid[i][j]==1&& ab[i][j]==0 ){
                    z=1;
                    yy=0;
                    dfs(grid,ab,i,j,z,yy);
                    if(z!=0)
                        vv+=yy;
                    
                }
            }
        }
        return vv;
    }
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>&ab,int i,int j,int &z,int&yy){
        ab[i][j]=1;
        yy++;
        if(i==0 || i ==grid.size()-1 ||j==0 ||j==grid[0].size()-1)
            z=0;
        if(i+1<grid.size()&&grid[i+1][j]==1&&ab[i+1][j]==0)dfs(grid,ab,i+1,j,z,yy);
        if(j+1<grid[0].size()&&grid[i][j+1]==1&&ab[i][j+1]==0)dfs(grid,ab,i,j+1,z,yy);
        if(i-1>=0&&grid[i-1][j]==1&&ab[i-1][j]==0)dfs(grid,ab,i-1,j,z,yy);
        if(j-1>=0&&grid[i][j-1]==1&&ab[i][j-1]==0)dfs(grid,ab,i,j-1,z,yy);

        return;
    }
};


