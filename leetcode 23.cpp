/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

vector<ListNode*> l;
int n;
void heapify(int i){
    if(i>=n) return;
    int left = 2*i+1;
    int right = 2*i+2;
    int large = i;
    if(left < n &&l[left] && (!l[large] || l[left]->val<l[large]->val)){
        large =  left;
    }
    if(right < n &&l[right] && (!l[large] || l[right]->val < l[large]->val)){
        large = right;
    }
    if(large != i){
        ListNode* tmp = l[large];
        l[large] = l[i];
        l[i] = tmp;
        heapify(large);
    }
}
    
void build_heap(){
    for(int i=n/2-1;i>=0;--i){
        heapify(i);
    }
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        l = lists;
        n = l.size();
        build_heap();
        ListNode* ans = new ListNode(0);
        ListNode* head = ans;
        while(l[0]){
            ListNode* cur = l[0];
            head->next = cur;
            head = head->next;
            l[0] = l[0]->next;
            heapify(0);
        }
        return ans->next;
    }
};