class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int sum = 0;
        int origin  = 0;
        const int n = A.size();
        for(int i = 0;i < n; ++i){
            sum += A[i];
            origin += i * A[i];
        }
        
        int ans = origin;
        int tmp = ans;
        for(int i = 1;i < n; ++i){
            tmp += sum - n * A[n-i];
            ans = max(ans, tmp);
        }
        return ans;
    }
};