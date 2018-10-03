class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for(int i=1;i<n;++i){
            int l = triangle[i].size();
            for(int j=0;j<l;++j){
                if(j==0) triangle[i][j] += triangle[i-1][j];
                if(j==l-1) triangle[i][j] += triangle[i-1][j-1];
                if(j>0&&j<l-1){
                    triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
                }
            }
        }
        int ans = triangle[n-1][0];
        for(int i=1;i<triangle[n-1].size();++i){
            ans = min(ans, triangle[n-1][i]);
        }
        return ans;
    }
};