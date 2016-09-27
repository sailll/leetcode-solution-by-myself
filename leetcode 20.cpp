class Solution {
public:
    string dict="'{[";
    bool IsLeft(char s){
        for(int i=0;i<3;++i){
            if(s==dict[i]) return true;
        }
        return false;
    }
    bool isValid(string s) {
        int len=s.length();
        if(len==0) return true;
        for(int i=0;i<len;++i){
            if(s[i]=='(') s[i]='('-1;
        }
        stack<char> myStack;
        for(int i=0;i<len;++i){
            if(IsLeft(s[i])) myStack.push(s[i]);
            else{
                if(myStack.empty()) return false;
                else{
                    if(s[i]-myStack.top()==2) myStack.pop();
                    else return false;
                }
            }
        }
        if(myStack.empty()) return true;
        return false;
    }
    
};