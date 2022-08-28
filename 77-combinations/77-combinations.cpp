class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>perfix;
        vector<int> ab(n);
        for(int i = 1;i<=n;i++){
            ab[i-1]=i;
        }
        perm(ab,res,perfix,k);
        return res;
    }
    void perm(vector<int> &ab,vector<vector<int>>& res,vector<int> &perfix, int k){
        if(perfix.size()==k){
            res.push_back(perfix);
            return;               
        }
        for(int i = 0 ; i < ab.size();i++){
            perfix.push_back(ab[i]);

            auto start = ab.begin() + i+1;
            auto end = ab.end();
            vector<int> result(ab.size() - i -1);
            copy(start, end, result.begin());

            perm(result,res,perfix,k);
            perfix.pop_back();

    }
    }
};