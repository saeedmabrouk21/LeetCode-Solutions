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
        long long int  val = -2147483649;
        return valid(root,val);
    }
  
    bool valid(TreeNode* root , long long int& val){
        bool a=true,b=true;
        if(root->left)
            a = valid(root->left,val);
        
        if(root->val <= val)
            return false;
        cout <<val<<" "<<root->val<<endl;
        val = root->val;
        
         if(root->right)
            b = valid(root->right,val);
        
        return a&&b;
        
    }
};