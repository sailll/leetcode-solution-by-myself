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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int> > ans;
        if(!root) return ans;
        q.push(root);
        queue<TreeNode*> nq;
        vector<int> curar;
        while(!q.empty()){
            TreeNode *cur = q.front();
            q.pop();
            curar.push_back(cur->val);
            if(cur->left) nq.push(cur->left);
            if(cur->right) nq.push(cur->right);
            if(q.empty()){
                ans.push_back(curar);
                curar.clear();
                q = nq;
                while(!nq.empty()) nq.pop();
            }
        }
        return ans;
    }
};