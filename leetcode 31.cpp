class Solution {
public:
    void exchange(int &x,int &y){
        int tmp=x;
        x=y;
        y=tmp;
    }
    void nextPermutation(vector<int>& a) {
        int len=a.size();
        int i=len-1;
        while(a[i]<=a[i-1]&&i>0){
            --i;
        }
        if(i>0){
            for(int j=i;j<len;++j){
                if(j==len-1||a[i-1]<a[j]&&a[i-1]>=a[j+1]){
                    exchange(a[i-1],a[j]);
                    break;
                }
            }
        }
        sort(a.begin()+i,a.end());
    }
};