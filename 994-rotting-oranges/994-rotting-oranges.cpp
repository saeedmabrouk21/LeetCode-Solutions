class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int x=0;
        int xx,yy;
        int d;
        int Nx,Ny;
        pair<int,int> s;
        queue<pair<int,pair<int,int>>> ab;
        for(int i = 0 ; i < m ;i++){
            for(int j = 0 ; j < n;j++){
                if(grid[i][j]==2)
                    ab.push({0,{i,j}});
                else if(grid[i][j]==1)
                    x++;
            }
        }
        if(x==0)
            return 0;
        if(ab.empty())
            return -1;
        
        int arr[4][2]={
            {-1,0},
            {0,-1},
            {1,0},
            {0,1},
        };
        while(!ab.empty()){
            d=ab.front().first;
            s=ab.front().second;
            ab.pop();
            xx=s.first;
            yy=s.second;
            for(int i = 0 ; i < 4 ;i++){
                Nx=xx+arr[i][0];
                Ny=yy+arr[i][1];
                if(Nx>=0 &&Nx<m &&Ny>=0 &&Ny<n && grid[Nx][Ny]==1){
                    ab.push({d+1,{Nx,Ny}});
                    grid[Nx][Ny]=2;
                    x--;
                }
            }
        }
        if(x!=0)
            return -1;
        return d;
    }
};