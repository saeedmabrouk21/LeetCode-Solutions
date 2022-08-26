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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode* slow= head;
        ListNode* fast= slow;
        ListNode* brev=NULL;
        for(int i = 0 ; i < n-1 ; i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            brev=slow;
            fast=fast->next;
            slow=slow->next;
        }
        if(brev==NULL){
            return head->next;
        }
        brev->next = slow->next;
        //free(slow);
        return head;
    }
};