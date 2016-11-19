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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) return head;
        if(head->val!=head->next->val){
            head->next=deleteDuplicates(head->next);
            return head;
        }
        else{
            ListNode* it=head;
            while(it&&it->next&&it->val==it->next->val){
                it=it->next;
            }
            return deleteDuplicates(it->next);
        }
    }
};