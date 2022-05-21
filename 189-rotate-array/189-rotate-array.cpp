class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int>ab;
        ab.push_back(nums[(nums.size()-k)%nums.size()]);
        for(int i = (((nums.size()-k)%nums.size())+1)%nums.size(); i != (nums.size()-k)%nums.size() && nums.size()!=1 ;i=(i+1)%nums.size())
            ab.push_back(nums[i]) ;
        nums=ab;
    }
    
};