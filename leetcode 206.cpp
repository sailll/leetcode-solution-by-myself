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
    void exchange(ListNode* &l1,ListNode* &l2){
            int tmp=l1->val;
            l1->val=l2->val;
            l2->val=tmp;
    }
    void recur(ListNode* &head,int len){
        if(len==1) return;
        if(len==2){
            exchange(head,head->next);
            return;
        }
        ListNode* it=head;
        for(int i=1;i<len;++i){
            it=it->next;
        }
        exchange(head,it);
        recur(head->next,len-2);
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        int len=0;
        ListNode* it=head;
        while(it){
            len++;
            it=it->next;
        }
        recur(head,len);
        return head;
    }
};