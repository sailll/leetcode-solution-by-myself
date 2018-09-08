class Solution {
public:
    typedef long long ll; 
    vector<int> nums;
    int count(int l, int r){
        if(l==r) return 0;
        int mid = (l+r)/2;
        int ans = 0;
        ans += count(l, mid)+count(mid+1, r);
        int i = l;
        int j = mid+1;
        for(;i<=mid && j<=r;){
            ll left = nums[i];
            ll right = nums[j];
            if (left > 2*right){
                ans += mid - i + 1;
                j++;
            }
            else{
                i++;
            }
        }
        inplace_merge(nums.begin()+l, nums.begin()+mid+1, nums.begin()+r+1);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        this->nums = nums;
        if(n==0) return 0;
        int ans = count(0, n-1);
        return ans;
    }
};