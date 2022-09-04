class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>ab;
        for(int i = 0 ; i < 9 ; i++){
            ab.clear();
            for(int j = 0 ; j< 9;j++){
                if(board[i][j]!='.'){
                    if(ab.count(board[i][j])==0){
                        ab.insert(board[i][j]);
                        
                    }else{
                        return false;
                    }
                }
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            ab.clear();
            for(int j = 0 ; j< 9;j++){
                if(board[j][i]!='.'){
                    if(ab.count(board[j][i])==0){
                        ab.insert(board[j][i]);
                        
                    }else{
                        return false;
                    }
                }
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            ab.clear();
            int x = (i%3)==0?0:(3*(i%3));
            int xx=(i/3)*3;
            cout <<x<<" "<<x+3<<" -- "<<xx<<" "<<xx+3<<endl;
            for(int j =  x; j< (x+3);j++){
                for(int k = xx ; k <(xx+3) ;k++){
                
                    if(board[j][k]!='.'){
                        if(ab.count(board[j][k])==0){
                            ab.insert(board[j][k]);

                        }else{
                            cout <<board[j][k];
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};