class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        std::sort(nums.begin(),nums.end());
        int len=nums.size();
        if (len==2)
        {
            return nums;
        }
        for(int i=0;i<len;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else ans.push_back(nums[i]);
        }
        return ans;
    }
};