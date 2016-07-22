class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int d[nums.size()];
        d[0]=1;
        int ans=1;
        for(int i=1;i<nums.size();++i){
            d[i]=1;
            for(int j=0;j<i;++j){
                if(nums[i]>nums[j])   d[i]=d[i]>d[j]+1?d[i]:d[j]+1;
            }
            ans=ans>d[i]?ans:d[i];
        }
        return ans;
    }
};