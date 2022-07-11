
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>saeed;
        if(root==NULL)
            return saeed;
        int prin=0;
        h3(root,saeed,1,prin);
        
        return saeed;
    }
    void h3(TreeNode* node,vector<int>&a,int level,int &prin){
        if(level>prin){
            a.push_back(node->val);
            prin++;
        }
        if(node->left==NULL && node->right == NULL){    
            return;
        }
        
        
        if(node->right==NULL){ 
            h3(node->left,a,++level,prin);
        }
        if(node->left==NULL){
            h3(node->right,a,++level,prin);  
        }
        if(node->right!=NULL &&node->left!=NULL){
            h3(node->right,a,++level,prin);
            h3(node->left,a,level,prin);
        }
    }
};