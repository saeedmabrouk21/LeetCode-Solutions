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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> ab;
        if(root==NULL)
            return ab;
          
        pre(root,ab);
        return ab;
    }
    void pre(TreeNode* root,vector<int>& a){
        
        if(root->left) pre(root->left,a);
        if(root->right) pre(root->right,a);
        a.push_back(root->val);
    }
};