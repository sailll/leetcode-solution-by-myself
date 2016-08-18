class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        int k=5;
        while(n>0){
            sum+=n/k;
            n/=k;
        }
        return sum;
    }
};