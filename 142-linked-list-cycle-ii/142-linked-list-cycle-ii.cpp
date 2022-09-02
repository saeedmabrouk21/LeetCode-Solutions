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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;
        ListNode* slow,*fast;
        slow=head;
        fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if (fast==slow){
                break;
            }
        }
        if(fast!=slow)
            return NULL;
        
        slow=head;
        while(true){
            if(slow==fast){
                return slow;
            }
            slow=slow->next;
            fast=fast->next;
        }
        
        
    }
};