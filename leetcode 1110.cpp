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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        TreeNode* pre = new TreeNode(0);
        pre->left = root;
        vector<TreeNode*> ans = sub_delNodes(pre, true, root, to_delete, false); 
        return ans;
    }
    vector<TreeNode*> sub_delNodes(TreeNode* father, bool lrf,TreeNode* root, vector<int>& to_delete, bool father_flag){ //if father_flag is true,which means his father is not removed
        vector<TreeNode*> ans;
        if(!root) return ans;
        bool flag = true; //if flag is true, this node is not to be moved
        for(auto del:to_delete){
            if(root->val == del){
                flag = false;
            }
        }
        if(!flag){
            if(lrf) father->left = NULL;
            if(!lrf) father->right = NULL;
        }
        if(!father_flag && flag) ans.push_back(root);    
        vector<TreeNode*> left_ans = sub_delNodes(root, true, root->left, to_delete, flag);
        vector<TreeNode*> right_ans = sub_delNodes(root, false, root->right, to_delete, flag);
        ans.insert(ans.end(), left_ans.begin(), left_ans.end());
        ans.insert(ans.end(), right_ans.begin(), right_ans.end());
        return ans;
    }
};