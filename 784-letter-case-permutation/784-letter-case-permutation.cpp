class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        string perfix;
        int start = 0;
        return perm(s,perfix,start);
    }
    vector<string> perm(string &ab,string perfix,int i){
        vector<string> res;
        
        if(perfix.size()==ab.size()){
            res.push_back(perfix);
            return res;
        }
        perfix.push_back(ab[i]);
        vector<string> second=perm(ab,perfix,i+1);
        res.insert(res.end(), second.begin(), second.end());
        if(!(ab[i]>='0' &&ab[i]<='9')){
            if(ab[i]==toupper(ab[i])){
                ab[i]=tolower(ab[i]);
            }else{
                ab[i]=toupper(ab[i]);
            }
            perfix.pop_back();
            perfix.push_back(ab[i]);
            second=perm(ab,perfix,i+1);
            res.insert(res.end(), second.begin(), second.end());
            if(ab[i]==toupper(ab[i])){
                ab[i]=toupper(ab[i]);
            }else{
                
                ab[i]=tolower(ab[i]);
            }
            perfix.pop_back();      
            
        }
        return res;
    }
};