class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int n = A.size();
        int min_ar[n];
        int max_ar[n];
        memset(min_ar, 0, sizeof(min_ar));
        memset(max_ar, 0, sizeof(max_ar));
        max_ar[0] = A[0];
        min_ar[n-1] = A[n-1];
        for(int i=1;i<n;++i){
            max_ar[i] = max(max_ar[i-1], A[i]);
        }
        for(int i=n-2;i>=0;--i){
            min_ar[i] = min(min_ar[i+1], A[i]);
        }
        int ans = 0;
        for(int i=1;i<n;++i){
            if(max_ar[i-1]<=min_ar[i]) return i;
        }
        return ans;
        
    }
};