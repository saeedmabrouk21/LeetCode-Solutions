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
    bool isSymmetric(TreeNode* root) {
        if(!(root->left||root->right))
            return true;
        if(!root->left != !root->right)
            return false;
        if(root->left->val!=root->right->val)
            return false;
        TreeNode* n1 = new TreeNode(0,root->left->left,root->right->right);
        TreeNode* n2 = new TreeNode(0,root->right->left,root->left->right);
        return isSymmetric(n1)&&isSymmetric(n2);
        
    }
};