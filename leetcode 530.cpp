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
    vector<int> v;
    void inorderTraversal(TreeNode* root){
        if(!root) return;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        int ans = INT_MAX;
        for(int i=0;i<v.size()-1;++i){
            ans = min(abs(v[i+1]-v[i]),ans);
        }
        return ans;
    }
};