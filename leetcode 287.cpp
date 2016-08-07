class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        const int maxlen=40000;
        int a[maxlen]={0};
        int l=nums.size();
        for(int i=0;i<l;++i){
            ++a[nums[i]];
        }
        for(int i=1;i<maxlen;++i){
            if(a[i]>=2) return i;
        }
        return 0;
    }
};