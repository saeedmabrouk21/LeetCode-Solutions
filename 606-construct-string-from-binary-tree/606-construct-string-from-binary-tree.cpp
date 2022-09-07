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
    string tree2str(TreeNode* root) {
        return preorder(root);
    }
    string preorder(TreeNode* root){
        if(root==NULL){
            return "";
        }
        string ans = to_string(root->val); ;
        if(root->left){
            ans+="(";
            ans+=preorder(root->left);
            ans+=")";
            }else{
            if(root->right){
                ans=ans+"()";
            }
        }
        
        if(root->right){
            ans+="(";
            ans+=preorder(root->right);
            ans+=(')');
        }
      
        return ans;
       
        
    }
};