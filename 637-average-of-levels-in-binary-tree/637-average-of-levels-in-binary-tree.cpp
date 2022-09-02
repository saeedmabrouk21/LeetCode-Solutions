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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> ab;
        TreeNode* s;
        ab.push(root);
        int a=1;
        int b=0;
        double sum=0 ;
        int count =1;
        vector<double> ans;
        while(!ab.empty()){
            s=ab.front();
            ab.pop();
            if(a==0){
                a=b;
                count = b;
                sum=0;
                b=0;
            }
            sum+=s->val;
            a--;
            if(a==0){
                cout <<sum/count;
                ans.push_back((double)sum/count);
            }
            if(s->right) {ab.push(s->right);b++;}
            if(s->left) {ab.push(s->left);b++;}
            
        }
        return ans;
        
    }
};