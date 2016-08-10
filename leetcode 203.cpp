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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode *newhead=new ListNode(-1);
        newhead->next=head;
        ListNode *x=head;
        ListNode *pre=newhead;
        while(x!=NULL){
            if(x->val==val){
                x=x->next;
                pre->next=x;
            }
            else{
                x=x->next;
                pre=pre->next;
            }
        }
        return newhead->next;
    }
};