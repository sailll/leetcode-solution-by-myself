class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=1;i<=len;++i){
            if(citations[len-i]>=i&&citations[len-i-1]<=i)
            {
                return i;
            }
        }
        return 0;
    }
};