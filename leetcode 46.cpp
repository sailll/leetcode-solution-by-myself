class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if(n==1){
            vector<int> cur_t;
            cur_t.push_back(nums[0]);
            ans.push_back(cur_t);
            return ans;
        }
        for(int i=0;i<n;++i){
            vector<int> tmp(nums);
            tmp.erase(find(tmp.begin(),tmp.end(),nums[i]));
            vector<vector<int>> cur_res = permute(tmp);
            for(int j=0;j<cur_res.size();++j){
                cur_res[j].push_back(nums[i]);
                ans.push_back(cur_res[j]);
            }
        }
        return ans;
    }
};