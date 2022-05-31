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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* iterate = head;
        if(head==NULL)
            return head;
        while(iterate->next!=NULL){
            if(iterate->val==iterate->next->val){
                ListNode* ap = iterate->next;
                iterate->next=iterate->next->next;
                //free(ap);
            }else{
                iterate=iterate->next;
            }
        }
        return head;
    }
};