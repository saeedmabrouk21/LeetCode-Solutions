/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root;
        if(nums.size()!=0)
            root = new TreeNode(nums[nums.size()/2]);
        else
            return NULL;
        int mid = nums.size()/2;
        vector <int> half1(nums.begin(),nums.begin()+mid);
        vector <int> half2(nums.begin()+1+mid,nums.end());
        root -> right = sortedArrayToBST(half2);
        root -> left  = sortedArrayToBST(half1);
        return root;   
    }
};