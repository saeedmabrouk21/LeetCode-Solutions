class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if(r*c != mat.size()*mat[0].size())
            return mat;
        vector<vector<int>> answer (r,vector<int>(c));
        vector< vector<int>>::iterator qq = mat.begin();
        int v= 0 ;
        for(int i = 0 ; i < r ;i++){
            for(int j = 0 ; j < c ;j++){
                if(v==mat[0].size()){
                    v=0;
                    qq++;
                    }
                answer[i][j]=(*qq)[v++];
            }
        }
        return answer;
    }
};