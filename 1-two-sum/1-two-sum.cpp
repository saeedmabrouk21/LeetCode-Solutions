class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ab;
        unordered_map<int, int> umap;
        for(int i = 0 ; i < nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end()){
                ab={i,umap[target-nums[i]]};
                break;
            }
                
            else
                umap[nums[i]]=i;
            
        }
        return ab;
        
    }
};