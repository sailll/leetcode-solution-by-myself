class Solution {
public:
    int countSegments(string s) {
        int len = s.length();
        if(len==0) return 0;
        int ans = 0;
        for(int i=0;i<len-1;++i){
            if(s[i]==' '&&s[i+1]!=' '){
                ans+=1;
            }
        }
        if(s[0]!=' ') ans+=1;
        return ans;
    }
};