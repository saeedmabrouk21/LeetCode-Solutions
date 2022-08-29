class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int j;
        int i;
        for(j = 0 ; j < strs[0].size();j++){
            char x= strs[0][j];
            for(i = 0 ; i < strs.size();i++){
                if(x!=strs[i][j]){
                    break;
                }
            }
            if(i!=strs.size()){
                break;
            }else{
                s.push_back(x);
            }
        }
        return s;
    }
};