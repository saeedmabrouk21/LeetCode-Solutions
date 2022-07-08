class Solution {
public:
    int climbStairs(int n) {
        vector<int>ab(n+1,-1);
        return hh(n,ab);
    }
    int hh(int n ,vector<int>&ab){
        if(n<=1)
            return 1;
        if(ab[n]!=-1)
            return ab[n];
        return ab[n]=hh(n-1,ab)+hh(n-2,ab);
    }
};