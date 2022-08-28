class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>perfix;
        vector<int> ab(n);
        for(int i = 1;i<=n;i++){
            ab[i-1]=i;
        }
        return  perm(ab,perfix,k);
    }
    vector<vector<int>> perm(vector<int> &ab,vector<int> &perfix, int &k){
        vector<vector<int>> res;
        if(perfix.size()==k){
            res.push_back(perfix);
        }
        for(int i = 0 ; i < ab.size();i++){
            perfix.push_back(ab[i]);
            auto start = ab.begin() + i+1;
            auto end = ab.end();
            vector<int> result(ab.size() - i -1);
            copy(start, end, result.begin());
            vector<vector<int>> second =perm(result,perfix,k);
            res.insert(res.end(), second.begin(), second.end());
            perfix.pop_back();
        }
          return res;
    }
  
};