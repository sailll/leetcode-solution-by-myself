class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b(n);
        uint32_t ans=0;
        int c=1;
        for(int i=0;i<32;++i){
            ans+=c*b[31-i];
            c*=2;
        }
        return ans;
    }
};