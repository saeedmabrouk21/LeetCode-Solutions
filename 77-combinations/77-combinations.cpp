class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>perfix;
        vector<int> ab(n);
        for(int i = 1;i<=n;i++){
            ab[i-1]=i;
        }
        int start = 0;
        return  perm(ab,perfix,k,start);
    }
    vector<vector<int>> perm(vector<int> &ab,vector<int> &perfix, int &k,int start){
        vector<vector<int>> res;
        if(perfix.size()==k){
            res.push_back(perfix);
        }
        for(int i = start ; i < ab.size();i++){
            perfix.push_back(ab[i]);
            
            vector<vector<int>> second =perm(ab,perfix,k,++start);
            res.insert(res.end(), second.begin(), second.end());
            perfix.pop_back();
        }
          return res;
    }
  
};