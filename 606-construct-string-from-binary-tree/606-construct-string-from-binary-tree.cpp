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
        string ans;
        preorder(root,ans);
        
        return ans;
    }
    void preorder(TreeNode* root,string &ans){
        if(root==NULL){
            return ;
        }
        ans=ans+to_string(root->val);
        
        if(root->left){
            ans.push_back('(');
            preorder(root->left,ans);
            ans.push_back(')');
            }else{
            if(root->right){
                ans=ans+"()";
            }
        }
        
        if(root->right){
            ans.push_back('(');
            preorder(root->right,ans);
            ans.push_back(')');
        }
      
       
        
    }
};