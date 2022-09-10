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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev= NULL;
        for(ListNode* i = head ; i!=NULL;){
            if(i->val==val){
                if(prev==NULL){
                    head=i->next;
                    // free(i);
                    i=head;
                    
                    
                }else if (i->next ==NULL){
                    prev->next=NULL;
                    // free(i);
                    break;
                }else{
                    prev->next=i->next;
                    // free(i);
                    i=prev->next;
                }
            }else{
                prev=i;
                i=i->next;
                
            }
        }
        return head;
        
    }
};