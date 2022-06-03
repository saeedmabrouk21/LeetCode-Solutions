class NumMatrix {
public:
    vector<vector<int>>abc;
    NumMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>ab(matrix.size());
        for(int i = 0 ; i < matrix.size();i++){
            ab[i]=vector<int>(matrix[0].size());
            ab[i][0]=matrix[i][0];
            for(int j = 1 ; j < matrix[0].size();j++){
                ab[i][j]=ab[i][j-1]+matrix[i][j];
            }
        }
        abc=ab;
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long int sum=0;
            for(int j = row1;j<=row2;j++){
                int xx;
                if (col1==0)
                    xx=0;
                else
                    xx = abc[j][col1-1];
                
                sum+=(abc[j][col2]-xx);
            }
        return sum; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */