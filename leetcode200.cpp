int visit[1000][1000];
class Solution {
public:
    bool exist(int i, int j, const vector<vector<char>>& grid){
        if (i>=0&&i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j]=='1') return true;
        return false;
    }
    
    void dfs(int i,int j,const vector<vector<char>>& grid){
        visit[i][j] = 1;
        if(exist(i-1,j,grid)&&!visit[i-1][j]) dfs(i-1,j,grid);
        if(exist(i,j-1,grid)&&!visit[i][j-1]) dfs(i,j-1,grid);
        if(exist(i+1,j,grid)&&!visit[i+1][j]) dfs(i+1,j,grid);
        if(exist(i,j+1,grid)&&!visit[i][j+1]) dfs(i,j+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m,n;
        m = grid.size();
        if(m==0) return 0;
        n = grid[0].size();
        memset(visit, 0, sizeof(visit));
        int ans = 0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(!visit[i][j]&&grid[i][j]=='1'){
                    dfs(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};