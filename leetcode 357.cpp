class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int sum=0;
        if(n==0) return 1;
        else return countNumbersWithUniqueDigits(n-1)+fact(10,n)*0.9;
        
    }
    int fact(int n,int m){
        int ans=1;
        for(int i=0;i<m;++i){
            ans*=(n-i);
        }
        return ans;
    }
};