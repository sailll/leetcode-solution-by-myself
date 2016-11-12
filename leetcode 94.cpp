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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        if(!root){
            return a;
        }
        else{
            for(int i:inorderTraversal(root->left)) a.push_back(i);
            a.push_back(root->val);
            for(int i:inorderTraversal(root->right)) a.push_back(i);
        }
        return a;
    }
};