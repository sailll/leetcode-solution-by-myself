class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[300]={0};
        int m[300]={0};
        for(int i=0;i<ransomNote.size();++i){
            ++r[ransomNote[i]];
        }
        for(int i=0;i<magazine.size();++i){
            ++m[magazine[i]];
        }
        for(int i=0;i<ransomNote.size();++i){
            if(r[ransomNote[i]]>m[ransomNote[i]]) return false;
        }
        return true;
    }
};