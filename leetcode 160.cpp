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
        ListNode* ita=headA;
        ListNode* itb=headB;
        int la=0;
        int lb=0;
        while(ita){
            la++;
            ita=ita->next;
        }
        while(itb){
            lb++;
            itb=itb->next;
        }
        ita=headA;
        itb=headB;
        if(la>lb){
            for(int i=0;i<la-lb;++i){
                ita=ita->next;
            }
        }
        else{
            for(int i=0;i<lb-la;++i){
                itb=itb->next;
            }
        }
        while(ita&&itb){
            if(ita==itb){
                return ita;
            }
            else{
                ita=ita->next;
                itb=itb->next;
            }
        }
        return NULL;
    }
};