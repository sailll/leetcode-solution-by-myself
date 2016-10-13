class Solution {
public:
    bool isValid(string s) {
        map<char,char> dict;
        dict['(']=')';
        dict['{']='}';
        dict['[']=']';
        stack<char> judge;
        int len=s.length();
        for(int i=0;i<len;++i){
            bool flag=false;
            for(auto it=dict.begin();it!=dict.end();++it){
                if(s[i]==it->first){
                    judge.push(s[i]);
                    flag=true;
                }
                
            }
            if(!flag){
                if(judge.empty()) return false;
                if(dict[judge.top()]==s[i]) judge.pop();
                else return false;
            }
        }
        if(judge.empty()) return true;
        return false;
        
    }
};