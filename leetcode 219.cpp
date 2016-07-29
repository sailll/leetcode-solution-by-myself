#include <cmath>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<int> hash[60000];
        for(int i=0;i<nums.size();++i){
            hash[nums[i]+10000].push_back(i);
        }
        for(int i=0;i<nums.size();++i){
            if(hash[nums[i]+10000].size()>=2){
                int len=hash[nums[i]+10000].size();
                int tmp=999999;
                for(int j=0;j<len-1;++j){
                    tmp=min(tmp,(hash[nums[i]+10000][j+1]-hash[nums[i]+10000][j]));
                }
                if(tmp<=k){
                    return true;
                }
            }
        }
        return false;
    }
};