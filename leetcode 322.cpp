class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount<0) return -1;
        int ans[1000000];
        ans[0]=0;
        for(int i=1;i<1000000;++i){
            ans[i]=999999;
        }
        for(int i=1;i<=amount;++i){
            for(int j=0;j<coins.size();++j){
                if(coins[j]<=i&&ans[i-coins[j]]+1<ans[i]){ 
                    ans[i]=ans[i-coins[j]]+1;
                }
            }

        }
        return ans[amount]==999999?-1:ans[amount];

    }
};