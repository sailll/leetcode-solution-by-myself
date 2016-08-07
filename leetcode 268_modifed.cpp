class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        int expectSum=(l+1)*l/2;
        int actualSum=std::accumulate(nums.begin(),nums.end(),0);
        return expectSum-actualSum;
    }
};