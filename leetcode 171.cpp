class Solution {
public:
    int titleToNumber(string s) {
        int l=s.length();
        int sum=0;
        for(int i=0;i<l;++i){
            sum+=(s[l-i-1]-'A'+1)*pow(26,i);
        }
        return sum;
    }
};