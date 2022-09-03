class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> ab (2*26,0);
        for(auto x:s){
            cout <<"z";
            if(x<'a')
                ab[x-'A'+26]++;
                
            else
                ab[x-'a']++;
        }
        int ans = 0;
        
        int zz=0;
        for(int i = 0 ; i < 2*26 ; i++){
            if(ab[i]%2==0){
                ans+=ab[i];
            }else{
                zz=1;
                ans+=(ab[i]-1);
            }
        }
        
        return ans+zz;
    }
};