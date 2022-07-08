class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<bool>> ab(m,vector<bool>(n,false));
        h3(image,sr,sc,color,ab,m,n);
        return image;
        
    }
    void h3(vector<vector<int>>& image,int sr,int sc,int color,vector<vector<bool>>&ab,int m ,int n){
        if(ab[sr][sc]==true)
            return ;
        ab[sr][sc]=true;
        if(sr-1>=0&&image[sr-1][sc]==image[sr][sc]){
            h3(image,sr-1,sc,color,ab,m,n);
        }
        if(sc-1>=0&&image[sr][sc-1]==image[sr][sc]){
            h3(image,sr,sc-1,color,ab,m,n);
        }
        if(sr+1<m&&image[sr+1][sc]==image[sr][sc]){
            h3(image,sr+1,sc,color,ab,m,n);
        }
        if(sc+1<n&&image[sr][sc+1]==image[sr][sc]){
            h3(image,sr,sc+1,color,ab,m,n);
        }
        image[sr][sc]=color;
        return ;
    }
    
};