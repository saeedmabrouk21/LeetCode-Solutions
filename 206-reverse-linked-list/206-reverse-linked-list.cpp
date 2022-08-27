/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        return reversee(NULL,head);
    }
    ListNode* reversee(ListNode* a,ListNode* b){
        if(b->next==NULL){
            b->next=a;
            return b;
        }
        ListNode* c = reversee(b,b->next);
        b->next=a;
        return c;
    }
    
};