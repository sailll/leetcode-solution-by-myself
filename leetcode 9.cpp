class Solution {
public:
    bool ispalindrome(const vector<int> p){
        int len=p.size();
        for(int i=0;i<len/2;++i){
            if(p[i]!=p[len-1-i]) return false;
        }
        return true;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> p;
        while(x){
            p.push_back(x%10);
            x/=10;
        }
        return ispalindrome(p);
    }
};