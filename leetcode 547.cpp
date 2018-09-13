
const int maxn = 250;
int par[maxn];
int ranking[maxn];


class Solution {
public:
    void init(int n){
        for(int i=0;i<n;++i){
            par[i] = i;
            ranking[i] = 0;
        }
    }
    
    int find(int i){
        if(i==par[i]) return par[i];
        return par[i] = find(par[i]);
    }
    
    bool same(int a,int b){
        if(find(a)==find(b)) return true;
        return false;
    }
    
    void unite(int a,int b){
        a = find(a);
        b = find(b);
        if(ranking[a]<ranking[b]){
            par[a] = b;
        }
        else{
            par[b] = a;
            if(ranking[a]==ranking[b]) ++ranking[a];
        }
    }
    
    int findCircleNum(vector<vector<int>>& M) {
        int n = M.size();
        int ans = n;
        init(n);
        for(int i=0;i<n-1;++i){
            for(int j=i+1;j<n;++j){
                if(M[i][j]){
                     if(!same(i,j)){
                         unite(i,j);
                         --ans;
                     }
                }
            }
        }
        return ans;
    }
};