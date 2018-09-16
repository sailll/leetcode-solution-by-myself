class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int mid = (left+right)/2;
        while(left<right){
            mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return -1;
    }
};