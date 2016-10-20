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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* nh=new ListNode(0);
        nh->next=head;
        ListNode* it=head;
        int len=0;
        while(it!=NULL){
            len++;
            it=it->next;
        }
        it=nh;
        for(int i=0;i<len-n;++i){
            it=it->next;
        }
        it->next=it->next->next;
        return nh->next;
    }
};