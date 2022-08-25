class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        vector<pair<int,int>> di{
            {1,0},{0,1},{-1,0},{0,-1}
        };
        
        
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,INT_MAX));
        
        queue<pair<int,int>> qu;
        
         for(int i = 0  ; i < m ; i++){
            for(int j = 0 ; j < n ;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    qu.push({i,j});
                }
            }
        }
    
        pair<int,int> s;
        // vi[x][y]=true;
        while(!qu.empty()){
            s=qu.front();
            qu.pop();
            int x=s.first;
            int y=s.second;
            // int d=s.first;
            for(int i = 0 ; i <4 ;i++){
                if(x+di[i].first>=0 && x+di[i].first<m &&y+di[i].second>=0 &&y+di[i].second<n&&ans[x+di[i].first][y+di[i].second]==INT_MAX){
                    ans[x+di[i].first][y+di[i].second]=ans[x][y]+1;
                    qu.push({x+di[i].first,y+di[i].second});
                }
            }   
        }
        return ans;
    }
  
        
        
//         int minn=1000000000;int i;
//         for(i = 0 ; i <4 ;i++){
//                 if(x+di[i].first>=0 && x+di[i].first<m &&y+di[i].second>=0 &&y+di[i].second<n){
//                     if(mat[x+di[i].first][y+di[i].second]==0){
//                         break;
//                     }else{
//                         if(ans[x+di[i].first][y+di[i].second]==-1)
//                             break;
//                         if(ans[x+di[i].first][y+di[i].second]<minn)
//                             minn=ans[x+di[i].first][y+di[i].second];
//                     }
//                 }
//             }
//         if(i==4){
//             return minn+1;
//         }
       
};