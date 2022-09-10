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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)  
            return false;
        if(root->left==NULL && root->right==NULL){
            if(root->val==targetSum)
                return true;
            return false;
        }

        return (root->right && tri(root->right,root->val,targetSum)) || (root->left &&tri(root->left,root->val,targetSum));
        
    }
    bool tri(TreeNode* a,int b , int c){
        if(a->left==NULL && a->right==NULL){
            if(a->val+b==c)
                return true;
            return false;
        }
        // if(a->left) 
        // if(a->right) 
        return (a->left &&tri(a->left,b+a->val,c)) || (a->right &&tri(a->right,b+a->val,c));
    }
};