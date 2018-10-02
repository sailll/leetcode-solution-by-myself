const int  maxn = 110;

int color[maxn];

bool final_flag = true;
class Solution {
public:
    vector<vector<int>> g;
    void dfs(int x, bool flag){
        if(color[x]==0){
            if(flag) color[x] = 1;
            else color[x] = 2;
            for(auto i:g[x]){
                dfs(i, !flag);
            }
        }
        if(flag&&color[x]==2) final_flag = false;
        if(!flag&&color[x]==1) final_flag = false;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        g = graph;
        final_flag = true;
        memset(color, 0, sizeof(color));
        int n = graph.size();
        for(int i=0;i<n;++i){
            bool flag = true;
            if(color[i]==1||color[i]==0) flag = true;
            else flag = false;
            dfs(i, flag);
        }
        return final_flag;
    }
};