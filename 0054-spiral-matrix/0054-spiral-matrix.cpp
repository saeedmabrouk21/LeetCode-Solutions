class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> vi (matrix.size(),vector<int>(matrix[0].size(),-1));
       
        vector<int> ans;
        int x = 0 ;
        dfs(matrix,vi,ans,0,0,x);
              
        return ans;
        
        
    }
     void dfs (vector<vector<int>>& grid, vector<vector<int>> &vi ,vector<int> & ans ,int x ,int y,int &qq){
          int arr [4][2]= {
            {0,1},
            {1,0},
            {0,-1},
            {-1,0}
              
        };
            vi[0][0]=1;
            ans.push_back(grid[x][y]);
         if(x+arr[qq][0]>=0 && x+arr[qq][0]<grid.size() && y+arr[qq][1]>=0 && y+arr[qq][1]<grid[0].size()&&vi[x+arr[qq][0]][y+arr[qq][1]]==-1){
                    vi[x+arr[qq][0]][y+arr[qq][1]]=1;
                    dfs(grid,vi,ans,x+arr[qq][0],y+arr[qq][1],qq);
                 }
         else
             for(int i = 0 ; i < 4 ;i++){
                    if(x+arr[i][0]>=0 && x+arr[i][0]<grid.size() && y+arr[i][1]>=0 && y+arr[i][1]<grid[0].size()&&vi[x+arr[i][0]][y+arr[i][1]]==-1){
                        vi[x+arr[i][0]][y+arr[i][1]]=1;
                        qq=i;
                        dfs(grid,vi,ans,x+arr[i][0],y+arr[i][1],qq);
                        
                     }
            }
    }
    
};