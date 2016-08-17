class Solution {
public:
    bool judge(char c){
        string dict("AEIOUaeiou");
        for(int i=0;i<dict.length();++i){
            if(c==dict[i]) return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int len=s.length();
        vector<int> index;
        string vs;
        for(int i=0;i<len;++i){
            if(judge(s[i])){
                vs+=s[i];
                index.push_back(i);
            }
        }
        int l=index.size();
        for(int i=0;i<l;++i){
            s[index[i]]=vs[l-i-1];
        }
        return s;
    }
};