class Solution {
public:
    int longestPalindrome(string s) {
        const int d=256;
        int len=s.length();
        int dict[d];
        memset(dict,0,sizeof(dict));
        for(int i=0;i<len;++i){
            dict[s[i]]++;
        }
        bool flag=false;
        int ans=0;
        int maxtmp=0;
        for(int i=0;i<d;++i){
            if(dict[i]%2==0) ans+=dict[i];
            else{
                ans+=(dict[i]-1);
                flag=true;;
            }
        }
        ans+=maxtmp;
        if(flag) ans++;
        return ans;
    }
};