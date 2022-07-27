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
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        //cout<<root->val;
        if(root->left){
            TreeNode* ac= root->right;
            root->right=root->left;
            TreeNode* a=root;
            while(a->right)
                a=a->right;
            //cout<<"#"<<a->val<<"^"<<ac->val;
            a->right=ac;
            root->left=NULL;
        }
        if(root->right==NULL)
            return;
        flatten(root->right);
    }
};