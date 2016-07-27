class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        else{
            vector<int> sv;
            vector<int> tv;
            for(int i=0;i<s.length();++i){
                sv.push_back(s[i]);
                tv.push_back(t[i]);
            }
            sort(sv.begin(),sv.end());
            sort(tv.begin(),tv.end());
            for(int i=0;i<s.length();++i){
                if(sv[i]!=tv[i]) return false;
            }
        }
        return true;
    }
};