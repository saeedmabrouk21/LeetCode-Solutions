/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(((p->val - root -> val )>0 &&( q->val - root->val)>0)||
              ((p->val - root -> val )<0 &&( q->val - root->val)<0)){
            root = p->val > root->val ? root->right:root->left;
        }
        
        return root;
    }
};