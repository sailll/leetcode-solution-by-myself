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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        queue<TreeNode*> buffer;
        if(root) q.push(root);
        while(!q.empty()){
            int level_max = INT_MIN;
            while(!q.empty()){
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left) buffer.push(cur->left);
                if(cur->right) buffer.push(cur->right);
                level_max = max(level_max, cur->val);
            }
            ans.push_back(level_max);
            while(!buffer.empty()){
                q.push(buffer.front());
                buffer.pop();
            }
        }
        return ans;
    }
};