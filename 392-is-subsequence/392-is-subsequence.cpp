class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = -1;
        for(int i = 0 ; i < s.size();i++){
            x=t.find(s[i],x+1);
            if(x==string::npos)
                return false;
            
        }
        return true;
    }
};