/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *a = node;
        while(a->next->next!=NULL){
            a->val = a->next->val;
            a=a->next;
        }
        a->val = a->next->val;
        a->next=NULL;
    }
};