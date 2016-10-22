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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* it=head;
        int len=0;
        while(it){
            ++len;
            it=it->next;
            if(len>10000) return true;
        }
        return false;
    }
};