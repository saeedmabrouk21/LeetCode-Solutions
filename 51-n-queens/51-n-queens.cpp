class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> >ab;
        solve(ab,findsolution(n),0,n);
        //for(int i = 0;i < n;i++)
          //  solve(ab,findsolution(n),0,n) ;  
        return ab;
    }
private:
    vector<string> findsolution(int n){
        vector<string> xx (n);
        for(int i = 0 ; i < n ; i++){
            xx[i] = "." ;
            for(int j = 1 ; j < n ;j++){
                xx[i].append(".");
            }
        }
        return xx;
    }
    bool solve (vector<vector<string> >& ab,vector<string> xx,int col,int n){
        if (col>=n){
            ab.push_back(xx);
            xx=findsolution(n);
            return true;
        }
        for(int i = 0 ;i<n;i++){
            if(isSafe(xx,i,col,n)){
                xx[i].at(col)='Q';
                if(!solve(ab,xx,col+1,n))  
                xx[i].at(col)='.';
            }
        }
        return false;
    }
    bool isSafe(vector<string> board,int row,int col,int n ){
     int i, j;
    for (i = 0; i < col; i++)
        if (board[row].at(i)!='.')
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i].at(j)=='Q')
            return false;
    for (i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i].at(j)=='Q')
            return false;
    return true;
    }
};