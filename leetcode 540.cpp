class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        if(nums[right]==nums[right-1]){
            --right;
        }
        else{
            return nums[right];
        }
        int mid = 0;
        while(left < right){
            mid = (left + right)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(nums[mid]==nums[mid-1]){
                --mid;
            }
            if(mid==left) mid += 2;
            if((mid-left)%2) right = mid;
            else left = mid;
        }
        return nums[mid];
    }
};