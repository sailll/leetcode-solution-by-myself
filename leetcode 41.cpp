class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a[200]={0};
        int l=nums.size();
        for(int i=0;i<l;++i){
            if(nums[i]>0) ++a[nums[i]];
        }
        for(int i=1;i<200;++i){
            if(a[i]==0) return i;
        }
        return 0;
    }
};