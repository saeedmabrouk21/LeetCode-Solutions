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
    bool findTarget(TreeNode* root, int k) {
        vector<int> a;
        pre(root,a);
        for(auto x : a)
            cout <<x<<" ";
        int b = 0 ; 
        int c = a.size()-1;
        while(b<c){
            if(a[b]+a[c]==k){
                return true;
            }
            if(a[b]+a[c]>k){
                b++;
            }else{
                
                c--;
            }
        }
        return false;
    }
    void pre(TreeNode* root,vector<int>& a){
        if(root->right) pre(root->right,a);
        a.push_back(root->val);
        if(root->left) pre(root->left,a);
    }
};