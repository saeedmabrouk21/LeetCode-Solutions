class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,pair<int,int>>> saeed;
        int m = maze.size();
        int n = maze[0].size();
        pair<int,pair<int,int>> s;
        maze[entrance[0]][entrance[1]]='+';
        saeed.push({0,{entrance[0],entrance[1]}});
        int arr[4][2]={
            {0,1},
            {1,0},
            {-1,0},
            {0,-1},
        };
        while(!saeed.empty()){
            s=saeed.front();
            saeed.pop();
            // maze[s.second.first][s.second.second]='+';
            int d = s.first;
            for(int i = 0 ; i < 4 ;i++){
                int dx=s.second.first+arr[i][0];
                int dy=s.second.second+arr[i][1];
                
                if(dx>=0 && dx<m && dy>=0 && dy<n && maze[dx][dy]=='.'){
                    if(dx==0 || dx==m-1 || dy==0 ||dy==n-1)
                        return d+1;
                    saeed.push({d+1,{dx,dy}});
                    maze[dx][dy]='+';
                }
            }
        }
        return -1;
    }
};