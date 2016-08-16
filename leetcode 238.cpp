class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int len=nums.size();
        vector<int> ans(len,1);
        ans[len-1]=1;
        for(int i=len-2;i>=0;--i){
            ans[i]=nums[i+1]*ans[i+1];
        }
        int left=1;
        for(int i=1;i<len;++i){
            left*=nums[i-1];
            ans[i]*=left;
        }
        return ans;
    }
};