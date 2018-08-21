class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        TreeNode* lr = root;
        TreeNode* rr = root;
        int hl = 0;
        int hr = 0;
        while(lr){ lr=lr->left; ++hl;}
        while(rr){ rr=rr->right; ++hr;}
        if(hr == hl) return pow(2, hl)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};