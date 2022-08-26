class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ab;
        int start= 0 ;
        int end=-1;
        int res=0;
        for(auto x:s){
            end++;
            if(ab.count(x)==0){
                ab.insert(x);
            }else{
                while(s[start]!=x){
                    cout<<x;
                    ab.erase(ab.find(s[start]));
                    start++;
                }
              //  ab.erase(ab.find(s[start]));
                start++;
            }
            res = max(res,end-start+1);
        }
        return res;
    }
};