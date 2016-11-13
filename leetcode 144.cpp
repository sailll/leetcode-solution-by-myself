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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        if(!root) return a;
        a.push_back(root->val);
        for(auto i:preorderTraversal(root->left)) a.push_back(i);
        for(auto i:preorderTraversal(root->right)) a.push_back(i);
        return a;
    }
};