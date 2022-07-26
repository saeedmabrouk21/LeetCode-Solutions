class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=nums[0];
        int count=0;
        for(auto x:nums){
            if(x==cand)
                count++;
            else{
                count--;
                if(count==0){
                    cand=x;
                    count =1;
                }
            }
        }
        return cand;
    }
};