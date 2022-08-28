class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> perfix;
        vector<bool>taken (nums.size(),false);
        return perm(nums,taken,perfix);
    }
    vector<vector<int>> perm(vector<int>&ab,vector<bool>&taken,vector<int>& perfix){
        vector<vector<int>> res;
        if(perfix.size()==ab.size()){
            res.push_back(perfix);
        }
        for(int i = 0 ; i < ab.size();i++){
            if(taken[i]){
                continue;
            }
            taken[i]=1;
            perfix.push_back(ab[i]);
            vector<vector<int>> second=perm(ab,taken,perfix);
            res.insert(res.end(), second.begin(), second.end());
            perfix.pop_back();
            taken[i]=0;
        }
        return res;
    }
};