class Solution {
public:
    int climbStairs(int n) {
        vector<int>ab(n+1,-1);
        return hh(n,ab);
    }
    int hh(int n ,vector<int>&ab){
        ab[1]=1;
        ab[0]=1;
        for(int i = 2 ; i <= n ; i++){
            ab[i]=ab[i-1]+ab[i-2];
        }
        return ab[n];
    }
};