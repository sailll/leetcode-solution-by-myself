class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        const int len=gas.size();
        int ans[len];
        memset(ans,0,sizeof(ans));
        int sum=0;
        int tk=0;
        for(int i=0;i<len;++i){
            ans[i]=gas[i]-cost[i];
            sum+=ans[i];
        }
        if(sum<0) return -1;
        else{
            sum=0;
            for(int i=0;i<len;++i){
                if(sum<0){
                    sum=0;
                    tk=i;
                }
                sum+=ans[i];
            }
        }
        return tk;
    }
};