class Solution {
public:
    int uniquePaths(int m, int n) {
        --m;
        --n;
        long double sum=1;
        for(int i=0;i<m;++i)
        {
            sum=sum*(m+n-i)/(i+1);
        }

        return sum;
    }
};