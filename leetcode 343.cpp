class Solution {
public:
    int integerBreak(int n) {
        switch(n)
        {
            case 2:return 1;
            case 3:return 2;
            case 4:return 4;
        }
        int d=n%3;
        int j=n/3;
        int left=1;
        switch(d)
        {
            case 0:left=1;break;
            case 1:left=4;--j;break;
            case 2:left=2;break;
        }
        int ans=1;
        for(int i=0;i<j;++i)
        {
                ans*=3;
        }
        ans*=left;
        return ans;
    }
};