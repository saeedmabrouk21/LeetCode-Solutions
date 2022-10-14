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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* brev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            brev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next){
            brev=slow;
            slow=slow->next;
        }
        if(brev==NULL){
            return slow->next;
        
        }else{
            brev->next=slow->next;
            return head;
        }
    }
};