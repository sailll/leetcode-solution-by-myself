class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if(n==1){
            vector<int> cur_t;
            cur_t.push_back(nums[0]);
            ans.push_back(cur_t);
            return ans;
        }
        set<int> s;
        for(int i=0;i<n;++i){
            if(s.find(nums[i])!=s.end()){
                continue;
            }
            s.insert(nums[i]);
            vector<int> tmp(nums);
            tmp.erase(find(tmp.begin(),tmp.end(),nums[i]));
            vector<vector<int>> cur_res = permuteUnique(tmp);
            for(int j=0;j<cur_res.size();++j){
                cur_res[j].push_back(nums[i]);
                ans.push_back(cur_res[j]);
            }
        }
        return ans;
    }
};