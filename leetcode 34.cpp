class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        while(l<r){
            vector<int> ans;
            int mid=(l+r)/2;
            if(nums[mid]>target) r=mid;
            if(nums[mid]<target) l=mid+1;
            if(nums[mid]==target){
                for(int lm=mid;nums[lm]==target&&lm>=0;--lm){
                    if(nums[lm-1]!=target||lm==0) ans.push_back(lm);
                }
                for(int rm=mid;nums[rm]==target&&rm<nums.size();++rm){
                    if(nums[rm+1]!=target||rm==nums.size()-1) ans.push_back(rm);
                }
                return ans;
            }
        }
        vector<int> aa;
        const int a=-1;
        aa.push_back(a);
        aa.push_back(a);
        return aa;
    }
};