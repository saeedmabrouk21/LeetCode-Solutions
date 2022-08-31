class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = 0 ;
        unordered_map<char,char>ab;
        unordered_map<char,char>cd;
        while(true){
            if(i==s.length())
                break;
            if(ab.count(s[i])==0 &&cd.count(t[i])==0 ){
                ab[s[i]]=t[i];
                cd[t[i]]=s[i];
                i++;
            }else{
                if(ab[s[i]]==t[i] &&cd[t[i]]==s[i] ){
                    i++;
                }else
                    return false;
                
            }
        }
        return true;
    }
};