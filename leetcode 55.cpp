class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool dp[20000];
        int len=nums.size();
        if(len==1) return true;
        vector<int>::iterator it;
        it=find(nums.begin(),nums.end(),0);
        if(it==nums.end()) return true;
        else{
        memset(dp,true,sizeof(dp));
        for(int i=2;i<=len;++i){
            bool in=false;
            for(int j=i-1;j>=1;--j){
                if(dp[j]&&nums[j-1]>=(i-j)){
                    in=true;
                    break;
                }
            }
            if(!in) dp[i]=false;
        }
        return dp[len];
        }
    }
};