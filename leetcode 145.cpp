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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> a;
        if(!root) return a;
        for(int i:postorderTraversal(root->left)) a.push_back(i);
        for(int i:postorderTraversal(root->right)) a.push_back(i);
        a.push_back(root->val);
        return a;
    }
};