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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        bool l=false;
        bool r=false;
        if(root->left) l=hasPathSum(root->left,sum-root->val);
        if(root->right) r=hasPathSum(root->right,sum-root->val);
        if(!root->left&&!root->right) return root->val==sum;
        else return l||r;
    }
};