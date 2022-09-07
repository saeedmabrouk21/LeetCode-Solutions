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
        ans.push_back('(');
        int x = 0;
        if(root->left){
            x=1;
            preorder(root->left,ans);
            
            }
        ans.push_back(')');
        if(root->right){
            ans.push_back('(');
            preorder(root->right,ans);
            ans.push_back(')');
        }else{
            if(x==0){
            ans.pop_back();
            ans.pop_back();
        }}
            
      
       
        
    }
};