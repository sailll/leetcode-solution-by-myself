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
    bool isValidBST(TreeNode* root) {
        if(!root||(!root->left&&!root->right)) return true;
        long rmin=3147483647;
        long rmax=-3147483648;
        TreeNode* lit=root->left;
        TreeNode* rit=root->right;
        while(lit){
            rmax=lit->val;
            lit=lit->right;
        }
        while(rit){
            rmin=rit->val;
            rit=rit->left;
        }
        return (rmax<root->val&&rmin>root->val&&isValidBST(root->left)&&isValidBST(root->right));
    }
};