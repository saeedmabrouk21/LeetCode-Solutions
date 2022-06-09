class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> umap;
        int i = 1;
        for(auto x:numbers){
            if(umap.find(target - x)!=umap.end()){
                return {umap[target - x],i};
            }
            umap[x]=i;
            i++;
        }
        return {umap[0],i};
    }
};