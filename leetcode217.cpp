class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         std::sort(nums.begin(),nums.end());
         int len=nums.size();
         if(len==1)
         {
             return false;
         }
         for(int i=0;i<len;i++)
         {
             if(nums[i]==nums[i+1])
             return true;
         }
         return false;
    }
};