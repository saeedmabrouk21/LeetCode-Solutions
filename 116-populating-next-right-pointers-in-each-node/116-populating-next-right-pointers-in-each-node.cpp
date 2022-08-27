/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)  return root;
        root->next=NULL;
        queue<Node*> saeed;
        if(root->left==NULL) return root;
        saeed.push(root->left);
        saeed.push(root->right);
        Node*first,*second;
        int k = 1;
        while(!saeed.empty()){
            
            cout <<k;
            for(int i = 0 ; i < 2*k-1 ;i++){
                // cout<<i;
                
                first=saeed.front();
                // cout <<first->val<<" "<<first->right<<" "<<first->left<<endl;
                saeed.pop();
                second=saeed.front();
                
                first->next=second;
                saeed.push(first->left);
                saeed.push(first->right);
                
                
            }
            saeed.pop();
            second->next=NULL;
            saeed.push(second->left);
                saeed.push(second->right);
            queue<Node*> ss;
            ss=saeed;
            
            saeed=ss;
            cout <<endl;
            if(saeed.front()==NULL){
                break;
            }
            k<<=1;
        }
        return root;
    }
};