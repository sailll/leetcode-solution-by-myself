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
    int over_all_rst = INT_MIN;
    int maxPathSumEnd(TreeNode* root){
        if(!root) return 0;
        int ans = max(maxPathSumEnd(root->left), maxPathSumEnd(root->right)) + root->val;
        return max(0, ans);
    }
    
    void calPath(TreeNode* root){
        if(!root) return;
        int lr = maxPathSumEnd(root->left);
        int rr = maxPathSumEnd(root->right);
        over_all_rst = max(over_all_rst, lr+rr+root->val);
        calPath(root->left);
        calPath(root->right);
    }
    int maxPathSum(TreeNode* root) {
        calPath(root);
        return over_all_rst;
    }
};