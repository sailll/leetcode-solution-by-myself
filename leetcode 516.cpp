class Solution {
public:
    int helper(string& s, vector<vector<int>>& m,int i, int j){
        if(m[i][j]){
            return m[i][j];
        }
        if(i==j) return 1;
        if(j<i) return 0;
        
        if(s[i]==s[j]){
            m[i][j] = 2 + helper(s, m,i+1, j-1 );;
        }
        else{
            m[i][j] = max(helper(s, m,i+1,j), helper(s, m, i,j-1));
        }
        return m[i][j];
    }
    
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>>m (n+1,vector<int>(n+1,0));
        return helper(s, m, 0, n-1);
    }
};