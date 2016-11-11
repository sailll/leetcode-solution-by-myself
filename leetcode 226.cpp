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
    bool judgeleaf(TreeNode* node){
        if(!node->left&&!node->right){
            return true;
        }
        return false;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root||judgeleaf(root)) return root;
        TreeNode* tmp=invertTree(root->left);
        root->left=invertTree(root->right);
        root->right=tmp;
        return root;
    }
};