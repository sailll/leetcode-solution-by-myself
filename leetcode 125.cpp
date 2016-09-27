class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        int len=s.length();
        for(int i=0;i<len;++i){
            if((s[i]>='A'&&s[i]<='Z')){
                n+=char(s[i]+'a'-'A');
            }
            if((s[i]<='9'&&s[i]>='0')||(s[i]<='z'&&s[i]>='a')){
                n+=s[i];
            }
        }
        int l=n.length();
        
        for(int i=0;i<l/2;++i){
            if(n[i]!=n[l-1-i]) return false;
        }
        return true;
    }
};