/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    void sumLevel(TreeNode* root, int cursum){
        if(!root) return;
        int c = cursum*10 + root->val;
        if(!root->left && !root->right) sum += c;
        sumLevel(root->left, c);
        sumLevel(root->right, c);
    }
    int sumNumbers(TreeNode* root) {
        sum = 0;
        sumLevel(root, 0);
        return sum;
    }
};