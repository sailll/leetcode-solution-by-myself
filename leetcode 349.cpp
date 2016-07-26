class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int l1=nums1.size();
        int l2=nums2.size();
        int a1[10000]={0};
        int a2[10000]={0};
        for(int i=0;i<l1;++i){
            ++a1[nums1[i]];
        }
        for(int i=0;i<l2;++i){
            ++a2[nums2[i]];
        }
        for(int i=0;i<10000;++i){
            if(a1[i]&&a2[i]) ans.push_back(i);
        }
        return ans;
    }
};