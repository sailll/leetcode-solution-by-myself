class Solution {
public:
    long nthUglyNumber(int n) {
        long a[5]={1,2,3,4,5};
        long dp[5000];
        for(int i=0;i<5000;++i){
            dp[i]=0xfffffffff;
        }
        dp[1]=1;
        int tmp=1;
        for(int i=2;i<=n;++i){
            for(int l=tmp;l<i;++l){
                for(int j=1;j<5;++j){
                    if(dp[l]*a[j]>dp[i-1]){
                         dp[i]=min(dp[l]*a[j],dp[i]);
                    }
                }
            }
        }
        return dp[n];
    }
};