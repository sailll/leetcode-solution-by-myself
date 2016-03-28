class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
       int len=nums.size();
       for(int i=0;i<len-1;i++)
       {
           if(nums[i]==nums[i+1])
           {
           std::vector<int>::iterator it=nums.begin();
           nums.erase(it+i+1);
           i--;
           len--;
           }
       }
       return nums.size();
        
    }
};