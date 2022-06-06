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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode *> saeedFares;
        stack<ListNode *> yasser;
        ListNode* per=NULL;
        for(ListNode* now = headA;now != NULL ; now=now->next){
            saeedFares.push(now);
            //cout << saeedFares.top()->val;
            }
        for(ListNode* now = headB;now!=NULL ; now=now->next)
            yasser.push(now);
        while((!saeedFares.empty())&&(!yasser.empty())){
            if(saeedFares.top()!=yasser.top())
                return per;
            else {
                per = saeedFares.top();
                saeedFares.pop();
                yasser.pop();
            }
        }
        return per;
    }
};