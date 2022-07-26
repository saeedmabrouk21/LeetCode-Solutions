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
    if(root==NULL)
        return NULL;
   
    TreeNode* a,*b;
    a=lowestCommonAncestor(root->right,p,q);
    b=lowestCommonAncestor(root->left,p,q);
        
     if(root==p)
        return p;
    if(root==q)
        return q;
    if(b!=NULL && a!=NULL)
        return root;
    if(b!=NULL)
        return b;
    if(a!=NULL)
        return a;
    return NULL;
}
};