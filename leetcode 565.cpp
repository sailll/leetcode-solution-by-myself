const int maxn = 20010;
int par[maxn];
int ranking[maxn];
int counting[maxn];
int mc = 0;
class Solution {
public:
    void init(int n){
        mc = 1;
        for(int i=0;i<n;++i){
            par[i] = i;
            ranking[i] = 1;
            counting[i] = 1;
        }
    }
    
    int find(int x){
        if(x==par[x]){
            return x;
        }
        else{
            par[x] = find(par[x]);
            return par[x];
        }
    }
    
    void unite(int x,int y){
        x = find(x);
        y = find(y);
        if(x==y){
            return;
        }
        if(ranking[x]<ranking[y]){
            par[x] = y;
        }
        else{
            par[y] = x;
            if(ranking[x]==ranking[y]){
                ranking[x]++;
            }
        }
        counting[x] += counting[y];
        counting[y] = counting[x];
        mc = max(mc, counting[x]);
    }
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        init(n);
        for(int i=0;i<n;++i){
            unite(i, nums[i]);
        }
        return mc;
    }
};