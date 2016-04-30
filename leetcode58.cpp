class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        while(s[n-1]==' ')
        {
            --n;
        }
        for(int i=0;i<n;++i&&n!=0)
        {
             if(s[n-i-1]!=' ')
               ++count;
             else break;
        }
    return count;     
    }
};