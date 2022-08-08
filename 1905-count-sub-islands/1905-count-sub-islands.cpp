class Solution {
public:
    void dfs(vector<vector<int>>& grid1,vector<vector<int>>& grid2,vector<vector<bool>>&ab,int i,int j,int& z){
        ab[i][j]=1;
        if(grid1[i][j]==0){
            z=1;
            
        }
        
        if(i+1<grid2.size()&&grid2[i+1][j]==1&&ab[i+1][j]==0)
            dfs(grid1,grid2,ab,i+1,j,z);
        
        if(j+1<grid2[0].size()&&grid2[i][j+1]==1&&ab[i][j+1]==0)
            dfs(grid1,grid2,ab,i,j+1,z);
        
        if(i-1>=0&&grid2[i-1][j]==1&&ab[i-1][j]==0)
            dfs(grid1,grid2,ab,i-1,j,z);
        if(j-1>=0&&grid2[i][j-1]==1&&ab[i][j-1]==0)dfs(grid1,grid2,ab,i,j-1,z);
        return;
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
     
        int x =grid2.size();
        int y =grid2[0].size();
        
        int yy =0;
        vector<vector<bool>> ab(x,vector<bool>(y,0));
        
        for(int i = 0;i<x;i++){
            for(int j = 0 ; j<y;j++){
                
                if(grid2[i][j]==1&& ab[i][j]==0 ){
                    int z = 0 ;
                    dfs(grid1,grid2,ab,i,j,z);
                    if(z==0)
                        yy++;
                }
            }
        }
        return yy;
    }
};



