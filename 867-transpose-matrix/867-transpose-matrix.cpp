class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();int colm=matrix[0].size();//row  = 2 //colm =3
        vector<vector<int>> ab(colm);//ab 3*
        for(int i = 0 ; i < colm;i++){
            ab[i]=vector<int>(row);//ab 3*2
            for(int j = 0 ; j < row;j++){
                ab[i][j]=matrix[j][i];
            }
        }
        return ab;
    }
};