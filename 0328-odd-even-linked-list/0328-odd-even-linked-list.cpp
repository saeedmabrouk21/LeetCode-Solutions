class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head || !head->next) return head;
        int x;
        bool xx =false;
        bool ab = true; 
        ListNode* go = head ;
        
        while(go->next->next){
            go = go ->next;
            ab=!ab;    
        }
        if(ab){
            x=go->next->val;
            go->next = NULL;
            xx=true;
        }else{
            go=go->next;
        }
        
        cout <<go->val;
        ListNode* wait = head->next;
        ListNode* brev = head; 
        ListNode* sign = go ;
        while(wait!= sign && brev !=sign ){
            go->next = wait;
            brev->next = wait->next;
            wait=wait ->next->next;
            brev = brev->next;
            go = go->next;
            go->next = NULL;
            
        }
        if(xx==true){
            go->next = new ListNode(x);
        }
        return head;
    }
    
};