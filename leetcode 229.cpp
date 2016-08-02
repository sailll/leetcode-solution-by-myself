class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a[10000];
        int len=nums.size();
        map<int,int> mapint;
        for(int i=0;i<len;++i){
            ++mapint[nums[i]];
        }
        vector<int> ans;
        for(map<int,int>::iterator it=mapint.begin();it!=mapint.end();++it){
            if(it->second>len/3){
                ans.push_back(it->first);
            }
        }
        return ans;
        
    }
};