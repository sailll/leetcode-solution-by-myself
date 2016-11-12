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
        if(!node) return false;
        if(!node->left&&!node->right) return true;
        else return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int tmp=judgeleaf(root->left)?root->left->val:0;
        return tmp+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};