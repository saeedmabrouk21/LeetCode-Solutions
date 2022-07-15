class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<bool>> ab(m,vector<bool>(n,false));
        int si = 0 ,maxx = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(ab[i][j]==false&&image[i][j]==1){
                    h3(image,i,j,ab,m,n,si);
                    
                    maxx=max(si,maxx);
                    si=0;
                }
            }
        }
        return maxx;
    }
     void h3(vector<vector<int>>& image,int sr,int sc,vector<vector<bool>>&ab,int m ,int n,int& s){
        if(ab[sr][sc]==true)
            return ;
        ab[sr][sc]=true;
        s++;
        if(sr-1>=0&&image[sr-1][sc]==1){
            h3(image,sr-1,sc,ab,m,n,s);
        }
        if(sc-1>=0&&image[sr][sc-1]==1){
            h3(image,sr,sc-1,ab,m,n,s);
        }
        if(sr+1<m&&image[sr+1][sc]==1){
            h3(image,sr+1,sc,ab,m,n,s);
        }
        if(sc+1<n&&image[sr][sc+1]==1){
            h3(image,sr,sc+1,ab,m,n,s);
        }
        
        return ;
    }
};