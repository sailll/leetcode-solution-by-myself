const int maxn = 1005;
int par[maxn];
int ranklist[maxn];
class Solution {
public:
    void init(int n){
        for(int i=1;i<=n;++i){
            par[i] = i;
            ranklist[i] = 0;
        }
    }
    
    int find(int i){
        if(i==par[i]){
            return par[i];
        }
        else return find(par[i]);
    }
    
    bool same(int a,int b){
        if(find(a)==find(b)) return true;
        return false;
    }
    
    void unite(int a,int b){
        a = find(a);
        b = find(b);
        
        if(ranklist[a]>ranklist[b]){
            par[b] = a;
        }
        else{
            par[a] = b;
            if(ranklist[a]==ranklist[b]) ranklist[b]++;
        }
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> k;
        init(n);
        for(auto v:edges){
            int a = v[0];
            int b = v[1];
            if(!same(a,b)) unite(a,b);
            else return v;
        }
        return k;
    }
};