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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> ab;
        ListNode* fast = head,*slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next!=NULL)
            slow=slow->next;
        if(slow==NULL)
            return true;
        while(head!=slow){
            ab.push(head);
            head=head->next;
        }
         if(fast->next==NULL)
            slow=slow->next;
        
        while(slow!=NULL){
            if(ab.top()->val != slow->val){
                return false;
            }
            ab.pop();
            slow=slow->next;
        }
        return true;
        
    }
};