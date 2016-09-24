class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        if(len==1) k=0;
        else k=k%len;
        std::rotate(nums.rbegin(),nums.rbegin()+k,nums.rend());
    }
};