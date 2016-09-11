class Solution {
public:
    char findTheDifference(string s, string t) {
        const int c=256;
        auto len=s.length();
        int dic1[c];
        int dic2[c];
        memset(dic1,0,sizeof(dic1));
        memset(dic2,0,sizeof(dic2));
        for(int i=0;i<len;++i){
            ++dic1[s[i]];
            ++dic2[t[i]];
        }
        ++dic2[t[len]];
        for(int i=0;i<c;++i){
            if(dic1[i]!=dic2[i]) return i;
        }
        return 0;
    }
};