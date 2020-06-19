/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int recurSum(vector<TreeNode*> root_list){
        int sum = 0;
        vector<TreeNode*> next_level;
        for(auto cur:root_list){
            sum += cur->val;
            if(cur->left!=nullptr){
                next_level.push_back(cur->left);
            }
            if(cur->right!=nullptr){
                next_level.push_back(cur->right);
            }
        }
        if(next_level.size()==0){
            return sum;
        }
        return recurSum(next_level);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<TreeNode*> root_list;
        root_list.push_back(root);
        return recurSum(root_list);
    }
};