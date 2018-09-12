class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if(prices.size()==0||prices.size()==1) return 0;
        int low = prices[0];
        int high = prices[0];
        int ans = 0;
        int flag = 0;
        for(int i=1;i<prices.size();++i){
            if(flag==0){
                low = min(low, prices[i]);
                if(prices[i] > low+fee){
                    high = prices[i];
                    ans += high-low-fee;
                    flag = 1;
                }
            }
            else{
                if(prices[i]>high){
                    ans +=  prices[i]-high;
                    high = prices[i];
                }
                if(prices[i]+fee < high){
                    low = prices[i];
                    flag = 0;
                }
            } 
        }
        return ans;
    }
};