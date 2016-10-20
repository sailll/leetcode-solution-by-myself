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
        if(head==NULL||head->next==NULL) return head;
        ListNode *iterator=head;
        while(iterator->next!=NULL){
            if(iterator->val==iterator->next->val){
                iterator->next=iterator->next->next;
            }
            else{
                iterator=iterator->next;
            }
        }
        return head;
    }
};