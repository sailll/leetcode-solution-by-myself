class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        int tmp=1;
        for(int i=1;i<nums.size();++i){
            if(nums[i]-nums[i-1]==1){
                ++tmp;
                ans=max(ans,tmp);
            }
            if(nums[i]-nums[i-1]>1){
                ans=max(ans,tmp);
                tmp=1;
            }
            if(nums[i]==nums[i-1]){
                continue;
            }
        }
        return ans;
        
    }
};