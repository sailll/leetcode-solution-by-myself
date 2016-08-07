class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        vector<vector<int> >ans;
        for(int j=0;j<pow(2,n);++j){
            bitset<32> cnt(c);
            vector<int> tmp;
            for(int i=0;i<n;++i){
                    if(cnt[i]) tmp.push_back(nums[i]);
            }
            ++c;
            ans.push_back(tmp);
        }
        return ans;
    }
};