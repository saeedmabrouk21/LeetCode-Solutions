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
    bool isValidBST(TreeNode* root) {
        TreeNode* tt=NULL;
        return valid(root,tt);
    }
  
    bool valid(TreeNode* root ,TreeNode* &tt){
        bool a=true,b=true;
        if(root->left)
            a = valid(root->left,tt);
        if(!a)return false;
        if(!tt){
            tt=root;
        }else{
            cout <<root->val <<" "<<tt->val<<endl;
            if(root->val <= tt->val)
                return false;
            tt->val = root->val;
        }
        
        
         if(root->right)
            b = valid(root->right,tt);
        
        return a&&b;
        
    }
};