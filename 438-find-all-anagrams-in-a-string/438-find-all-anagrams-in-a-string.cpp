class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        int pp = p.size();
        int ss=s.size();
        if(pp>ss)
            return ans;
        int freq[26]={0};
        for(int i = 0 ; i < pp;i++){
            freq[p[i]-'a']++;
            
        }
        int t;
        int freq2[26];
        for(int i = 0 ; i < ss-pp+1;i++){
            for(int k = 0 ; k < 26;k++){
                freq2[k]=freq[k];
            }
            t = pp;
            for(int j = i ; j < i+pp;j++){
                if(freq2[s[j]-'a']>0){
                    freq2[s[j]-'a']--;
                    t--;
                }
            }
            if(t==0){
                ans.push_back(i);
            }    
        }
        return ans;
    }
};