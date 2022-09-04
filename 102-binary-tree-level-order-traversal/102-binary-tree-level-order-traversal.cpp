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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> ab;
        ab.push(root);
        int next = 1;
        vector<vector<int>>av;
        if(!root)
            return av;
        while(!ab.empty()){
            vector<int> cc;
            int d = next;
            next = 0;
            for(int i = 0 ; i < d ;i++){   
                cc.push_back(ab.front()->val);
                if(ab.front()->left){
                    ab.push(ab.front()->left);
                    next++;
                }
                if(ab.front()->right){
                    ab.push(ab.front()->right);
                    next++;
                }
                ab.pop();
            }
            av.push_back(cc);
            
        }
        return av;
    }
};