class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len=nums.size();
        if(len<3) return false;
        int d[len]={0};
        d[0]=1;
        int ans=1;
        for(int i=1;i<len;++i){
            d[i]=1;
            for(int j=0;j<i;++j){
                if(nums[i]>nums[j]) d[i]=max(d[i],d[j]+1);
            }
            ans=max(ans,d[i]);
        }
        if(ans>=3) return true;
        else return false;
    }
};