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
    void reorderList(ListNode* head) {
        vector<int> list;
        ListNode* it=head;
        while(it){
            list.push_back(it->val);
            it=it->next;
        }
        vector<int> ans;
        for(int i=0,j=0;j<list.size();++i,j+=2){
            ans.push_back(list[i]);
            ans.push_back(list[list.size()-1-i]);
        }
        int i=0;
        it=head;
        while(it){
            it->val=ans[i];
            it=it->next;
            i++;
        }
    }
};