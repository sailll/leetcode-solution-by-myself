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
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        if(root&&!root->left&&!root->right) return 0;
        int md = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        return max(md, height(root->left)+height(root->right));
    }
};