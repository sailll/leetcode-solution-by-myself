map<int, vector<int>> g;
const int maxn = 10000;
int color[maxn];
bool final_flag = true;

class Solution {
public:
    void dfs(int x, int flag){
        if(color[x]==0){
            if(flag) color[x] = 1;
            else color[x] = 2;
            for(int i:g[x]){
                dfs(i, !flag);
            }
        }
        if(flag && color[x]==2) final_flag = false;
        if(!flag && color[x]==1) final_flag = false;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        final_flag = true;
        for(int i=1;i<=N;++i){
            g[i] = vector<int> ();
        }
        memset(color, 0, sizeof(color));
        for(auto v:dislikes){
            g[v[0]].push_back(v[1]);
            g[v[1]].push_back(v[0]);
        }
        for(int i=1;i<=N;++i){
            if(!color[i]) dfs(i, true);
        }
        return final_flag;
    }
};