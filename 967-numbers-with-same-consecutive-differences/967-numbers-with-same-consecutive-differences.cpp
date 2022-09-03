class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ab;
        int perfix=0;
        for(int i = 1 ; i<= 9 ;i++){
        backtracking(ab,i,k,n);
            }
        return ab;
    }
    void backtracking(vector<int>& ab,int perfix,int &k,int&n){
        if((int)log10(perfix)+1==n){
            ab.push_back(perfix);
            return;
        }
        if(perfix%10+k>=0 &&perfix%10+k<10)
            backtracking(ab,perfix*10+(perfix%10+k),k,n);
        if(k==0) return;
        if(perfix%10-k>=0 &&perfix%10-k<10)
             backtracking(ab,perfix*10+(perfix%10-k),k,n);
    }
};