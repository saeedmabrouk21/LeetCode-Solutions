class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ity=0;
        int ok = nums1.size();
        for(int i = 0 ; i < ok-m;i++)
            nums1.pop_back();
        //cout << *nums1.end();
        
        for(int i = 0 ;ity!=n ; ){
            //cout << nums1.size
            if(i!=nums1.size()){
                if(nums2[ity]<=nums1[i]){
                    nums1.insert(nums1.begin()+i,nums2[ity]);
                    ity++;
                    i++;
                 }else{
                    
                    i++;
                }
                
            }else{
                for(int j = ity;j<nums2.size();j++)
                    nums1.push_back(nums2[j]);
                    break;
            }
        }
       
    }
};