class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;int longg=0;
        for(auto x:nums )
            uset.insert(x);
        for(auto x:uset){
            if(!uset.count(x-1)){
                int curr=x;
                int streak = 1;
                while(uset.count(curr+1)){
                    streak++;
                    curr++;
                }
                longg = max(longg,streak);
            }
            
        }
        return longg;
    }
};