class Solution {
public:
    int maxProfit(vector<int>& prices){
        int len=prices.size();
        if(len==0) return 0;
        int tmp=prices[0];
        int ans[len]={0};
        for(int i=1;i<len;++i){
            tmp=min(tmp,prices[i]);
            ans[i]=max(ans[i-1],prices[i]-tmp);
        }
        return ans[len-1];
    }
};