class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int j;
        int i;
        for(j = 0 ; j < strs[0].size();j++){
            s.push_back(strs[0][j]);
            for(i = 0 ; i < strs.size();i++){
                if(s!=strs[i].substr(0,j+1)){
                    s.pop_back();
                    break;
                }
            }
            if(i!=strs.size()){
                break;
            }
        }
        return s;
    }
};