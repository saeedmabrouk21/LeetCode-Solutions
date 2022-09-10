class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        if(p.size()>s.size())
            return ans;
        vector<int> freq(26,0);
        for(int i = 0 ; i < p.size();i++){
            freq[p[i]-'a']++;
            
        }
        
        for(int i = 0 ; i < s.size()-p.size()+1;i++){
            vector<int>freq2=freq;  
            int t = p.size();
            for(int j = i ; j < i+p.size();j++){
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