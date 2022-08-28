class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left,right;
        vector<int> ab;
        nums.insert(nums.begin(),-99999);
        nums.push_back(99999);
        int i = 1;
        for(; i<nums.size()-1;i++){
            if(nums[i]>=0){
                //ab.push_back(nums[i]*nums[i])
                right=i;left=i-1;
                if(nums[right]==0){
                    ab.push_back(0);
                    right++;
                }
                while(left!=0||right!=nums.size()-1){
                    if(-1*nums[left]<nums[right]){
                        ab.push_back(nums[left]*nums[left]);
                        left--;
                    }
                    else {
                        ab.push_back(nums[right]*nums[right]);
                        right++;
                    }
                }
                break;
            }
        }
        if(i==nums.size()-1){
            for(i=nums.size()-2; i>0;i--)
                ab.push_back(nums[i]*nums[i]);
        }
        return ab;
    }
};