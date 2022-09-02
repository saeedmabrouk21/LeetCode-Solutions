class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 1; i <= numRows;i++){
            vector<int>ab(i);
            for(int j = 0 ; j < i ; j++){
                if(j==0 || j==i-1){
                    ab[j]=1;
                }else {
                    ab[j]=ans[i-2][j]+ans[i-2][j-1];
                }
            }
            
            ans.push_back(ab);
        }
        
        return ans;
    }
};