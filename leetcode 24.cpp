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
    ListNode* swapPairs(ListNode* head) {
        ListNode* it=head;
        while(it!=NULL){
            if(it->next==NULL) break;
            int tmp=it->val;
            it->val=it->next->val;
            it->next->val=tmp;
            it=it->next->next;
        }
        return head;
        
    }
};