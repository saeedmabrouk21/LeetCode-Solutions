class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>arrive(heights.size(),vector<int>(heights[0].size(),0));
        vector<vector<int>>ararive(heights.size(),vector<int>(heights[0].size(),0));
        vector<vector<int>> ans ;
        vector<vector<bool>>vi(heights.size(),vector<bool>(heights[0].size(),false));
        for(int y = 0 ; y < heights[0].size();y++ ){
            BFS_1(0,y,heights,arrive,vi);
        }
        for(int y = 0 ; y < heights.size();y++ ){
            BFS_1(y,0,heights,arrive,vi);
        }
        vector<vector<bool>>vii(heights.size(),vector<bool>(heights[0].size(),false));
         for(int y = 0 ; y < heights[0].size();y++ ){
             BFS_1(heights.size()-1,y,heights,ararive,vii);
        }
        for(int y = 0 ; y < heights.size();y++ ){
           BFS_1(y,heights[0].size()-1,heights,ararive,vii);
        }
        
        for(int x = 0 ; x < heights.size();x++){
            for(int y = 0 ; y < heights[0].size();y++ ){
                    if(arrive[x][y]&&ararive[x][y])
                        ans.push_back({x,y});              
            }
        }
        return ans;
    }

    void BFS_1(int x , int y , vector<vector<int>> heights,vector<vector<int>>&arrive,vector<vector<bool>>&vi){
        if(vi[x][y])
            return;
        pair<int,int>s;
        queue<pair<int,int>> queue;
        queue.push({x,y});
        vi[x][y]=1;
        while(!queue.empty())
        {
            s = queue.front();
            queue.pop();
            cout<<"x : "<<s.first <<" y : "<<s.second<<endl;
            arrive[s.first][s.second]=1;
            x=s.first;y=s.second;
            if(x-1>=0&&!vi[x-1][y] && heights[x-1][y]>=heights[x][y]){
                // cout<<"@";
                vi[x-1][y]=1;
                queue.push({x-1,y});
            }
            if(y-1>=0&&!vi[x][y-1] && heights[x][y-1]>=heights[x][y]){
                // cout<<"!";
               vi[x][y-1]=1;
                queue.push({x,y-1});
            }
            if(x+1<heights.size() &&!vi[x+1][y] && heights[x+1][y]>=heights[x][y]){
                // cout<<"#";
                vi[x+1][y]=1;
                queue.push({x+1,y});
            }if(y+1<heights[0].size()&&!vi[x][y+1] && heights[x][y+1]>=heights[x][y]){
                // cout<<"~";
                vi[x][y+1]=1;
                queue.push({x,y+1});
            }
        }
    }

};