class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1,0);
        for(int i=0;i<=num;++i){
            bitset<32> tmp(i);
            for(int j=0;j<32;++j){
                if(tmp[j]==1) ++ans[i];
            }
        }
        return ans;
    }
};