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
    ListNode* sortList(ListNode* head) {
        ListNode* it=head;
        vector<int> ar;
        while(it){
            ar.push_back(it->val);
            it=it->next;
        }
        sort(ar.begin(),ar.end());
        it=head;
        for(int i:ar){
            it->val=i;
            it=it->next;
        }
        return head;
    }
};