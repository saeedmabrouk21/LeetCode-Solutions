class Solution {
public:
    int removePalindromeSub(string s) {
        string b = s ;
        reverse(s.begin(), s.end());
        if(s==b)
            return 1;
        else 
            return 2;
    }
};