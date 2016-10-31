class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len=nums.size();
        int dict[len+1];
        memset(dict,0,sizeof(dict));
        for(int i=0;i<len;++i){
            dict[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<len+1;++i){
            if(dict[i]>1) ans.push_back(i);
        }
        return ans;
    }
};