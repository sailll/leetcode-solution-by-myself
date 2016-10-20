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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* iterator=l3;
        ListNode* it1=l1;
        ListNode* it2=l2;
        while(it1&&it2){
            int cur1=it1->val;
            int cur2=it2->val;
            if(cur1<=cur2){
                iterator->next=it1;
                it1=it1->next;
            }
            else{
                iterator->next=it2;
                it2=it2->next;
            }
            iterator=iterator->next;
        }
        while(it1){
            iterator->next=it1;
            it1=it1->next;
            iterator=iterator->next;
        }
        while(it2){
            iterator->next=it2;
            it2=it2->next;
            iterator=iterator->next;
        }
        return l3->next;
    }
};