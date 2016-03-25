class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> t;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(nums[i]+nums[j]==target)
                    t.push_back(i);
                    t.push_back(j);
                    return t;
            }
        }
    }
};