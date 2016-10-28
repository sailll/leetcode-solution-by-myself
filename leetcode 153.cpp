class Solution {
public:
    int findMin(vector<int>& nums) {
        int right=nums.size()-1;
        if(right==0) return nums[0];
        int left=0;
        int mid=0;
        while(left<right){
            mid=(left+right)/2;
            if(nums[mid]>nums[right]) left=mid+1;
            else right=mid;
        }
        return nums[right];
    }
};