class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ab;
        int start = 0 ;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            cout <<mid;
            if(nums[mid]==target&&(mid==0 || nums[mid-1]!=target   )){
                ab.push_back(mid);
                
                while(mid+1<nums.size()&&nums[mid+1]==target){             
                    mid++;
                }
                ab.push_back(mid);
                break;
            }else if (nums[mid]==target){
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        if(start>end){
            ab={-1,-1};
        }

        return ab;
    }
    
};