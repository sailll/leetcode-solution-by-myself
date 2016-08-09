class Solution {
public:
    static bool strict_weak_ordering(const pair<int,int> a,const pair<int,int> b){
        return a.first+a.second<b.first+b.second;
    }
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int l1=nums1.size();
        int l2=nums2.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<l1;++i){
            for(int j=0;j<l2;++j){
                ans.push_back(pair<int,int>(nums1[i],nums2[j]));
            }
        }
        sort(ans.begin(),ans.end(),strict_weak_ordering);
        vector<pair<int,int>> result;
        for(int i=0;i<k&&i<l1*l2;++i){
            result.push_back(ans[i]);
        }
        return result;
    }
};