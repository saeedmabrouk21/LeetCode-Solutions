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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = false;
        int sumdigit = l1->val+l2->val+carry;
        ListNode *sum=new ListNode(sumdigit%10);
        carry = sumdigit >9;
        ListNode *finall=sum;
        l1=l1->next;l2=l2->next;
        while(l1!=NULL&l2!=NULL){
            int sumdigit = l1->val+l2->val+carry;
            ListNode *digit = new ListNode(sumdigit%10);
            finall->next = digit;
            finall=digit;
            carry = sumdigit >9;
            l1=l1->next;l2=l2->next;
        }
        while(l1!=NULL){
            int sumdigit = l1->val+carry;
            ListNode *digit = new ListNode(sumdigit%10);
            finall->next = digit;
            finall=digit;
            carry = sumdigit >9;
            l1=l1->next;
        }
        while(l2!=NULL){
            int sumdigit = l2->val+carry;
            ListNode *digit = new ListNode(sumdigit%10);
            finall->next = digit;
            finall=digit;
            carry = sumdigit >9;
            l2=l2->next;
        }
        if(carry){
            int sumdigit = carry;
            ListNode *digit = new ListNode(sumdigit%10);
            finall->next = digit;
            finall=digit;
        }
    return sum;
    }

};