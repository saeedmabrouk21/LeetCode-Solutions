class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>  ab;
        
        for(auto x: words){
            unordered_map<char,char> uu;
            unordered_map<char,char> yy;
            vector<int> cc(pattern.size(),-1);
            int i ;
            for(i = 0 ; i < x.size();i++){
                if(uu.count(x[i])==0){
                    if(yy.count(pattern[i])!=0){
                        break;
                    }
                    uu[x[i]]=pattern[i];
                    yy[pattern[i]]=x[i];
                }    
                else{
                    if(pattern[i]!=uu[x[i]] || yy[pattern[i]]!=x[i])
                        break;
                }
            }
            if(i==x.size())
                    ab.push_back(x);
        
}
        return ab;
    }
};