class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap;
        umap['I'] = 1;
        umap['V'] = 5; 
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        int ahmed=0;
        if(s.size()!=1){
            int i = 0;
            for ( ; i<s.size()-1;i++)
                if(umap[s[i]]>=umap[s[i+1]])
                    ahmed+=(umap[s[i]]);
                else{
                    ahmed+=(-umap[s[i]]+umap[s[i+1]]);
                    i++;
                    }
            if(i==s.size()-1)
                ahmed +=(umap[s[i]]);
            return ahmed;

        }
        else
            return umap[s[0]];
    }
    
};