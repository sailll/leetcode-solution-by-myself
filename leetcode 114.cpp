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
    void flatten(TreeNode* root) {
        TreeNode* it=root;
        while(it){
            if(it->left){
                TreeNode* lit=it->left;
                while(lit->right) lit=lit->right;
                lit->right=it->right;
                it->right=it->left;
                it->left=NULL;
            }
            it=it->right;
        }
    }
};