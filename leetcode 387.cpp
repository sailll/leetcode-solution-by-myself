class Solution {
public:
    int firstUniqChar(string s) {
        int len=s.length();
        int hash[256];
        memset(hash,0,sizeof(hash));
        for(int i=0;i<len;++i){
            ++hash[s[i]];
        }
        for(int i=0;i<len;++i){
            if(hash[s[i]]==1) return i;
        }
        return -1;
    }
};