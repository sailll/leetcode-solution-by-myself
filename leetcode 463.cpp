class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]){
                    ans+=4;
                    if(i>0&&grid[i-1][j]) ans-=1;
                    if(i<grid.size()-1&&grid[i+1][j]) ans-=1;
                    if(j>0&&grid[i][j-1]) ans-=1;
                    if(j<grid[0].size()-1&&grid[i][j+1]) ans-=1;
                }
            }
        }
        return ans;
    }
};