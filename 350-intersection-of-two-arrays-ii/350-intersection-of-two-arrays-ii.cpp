class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> aa;
        unordered_map<int,int> umap;
        for(int i = 0 ; i < nums1.size();i++){
            if(umap.find(nums1[i])==umap.end())
                umap[nums1[i]]=0;
            else
                umap[nums1[i]]++;
        }
        //cout << umap[2];
        //if(umap.find(2)==umap.end())
        //  cout <<"saeed";
        for(int i = 0 ; i < nums2.size();i++){
            if(umap.find(nums2[i])!=umap.end())
                if(umap[nums2[i]]!=-1){
                    aa.push_back(nums2[i]);
                    umap[nums2[i]]--;
                }
        }
       return aa; 
    }
};