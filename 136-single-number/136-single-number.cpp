class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int re=0;
        for(auto x:nums){
            re^=x;
        }
        return re;
        
    }
};