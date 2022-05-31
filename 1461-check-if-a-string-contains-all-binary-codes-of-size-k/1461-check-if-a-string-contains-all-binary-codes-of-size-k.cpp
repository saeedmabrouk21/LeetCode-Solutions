class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int max = pow(2,k);
        cout <<max;
        int collected = 0;
        unordered_map<string,bool> umap;
        if(s.length()==1)
            return false;
        if(s.length()+1<k)
            return false;
        for(int i = 0 ; i < s.length()-k+1;i++){
            if(umap[s.substr (i,k)]==0 ){
                collected++;
                if(collected==max)
                    break;
                umap[s.substr (i,k)]=1;
            }
        }
        return collected == max;
    }
};