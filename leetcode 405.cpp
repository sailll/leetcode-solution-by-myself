class Solution {
public:
    char dict[16];
    void initi(){
        for(int i=0;i<10;++i){
            dict[i]='0'+i;
        }
        dict[10]='a';
        dict[11]='b';
        dict[12]='c';
        dict[13]='d';
        dict[14]='e';
        dict[15]='f';
        
    }
    string toHex(int num) {
        string ans;
        if(!num) return "0";
        initi();
        long long n;
        if(num<0) n=pow(2,32)+num;
        else n=num;
        while(n){
            int t=n%16;
            n/=16;
            ans+=dict[t];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};