class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ab (grid[0].size());
        for(int i = 0 ; i <grid[0].size();i++ ){
            ab[i]= func(grid,0,i);
        }
        return ab;
            
    }
    int func(vector<vector<int>>&grid,int x, int y){
        if(x==grid.size()){
            return y;
        }
        if(grid[x][y]==-1 && y == 0 )
            return -1;
        if(grid[x][y]==1 && y == grid[0].size()-1)
            return -1;
        if(grid[x][y]==-1 && grid[x][y-1]==1)
            return -1;
        if(grid[x][y]==1&& grid[x][y+1]==-1)
            return -1;
        if(grid[x][y]==1)
            return func(grid,x+1,y+1);
        if(grid[x][y]==-1)
            return func(grid,x+1,y-1);
        return 7 ;
    }
};