class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size()==0||k<0) return 0;
        map<int,int> nums_map;
        map<int,int>::iterator it;
        for(int i:nums){
            if(nums_map.find(i)==nums_map.end()){
                nums_map[i] = 1;
            }
            else nums_map[i]++;
        }
        int cnt = 0;
        if(k==0){
            for(auto nit=nums_map.begin();nit!=nums_map.end();++nit){
                if(nit->second>=2) ++cnt;
            }
            return cnt;
        }
        for(auto nit=nums_map.begin();nit!=nums_map.end();++nit){
            it = nums_map.find(nit->first+k);
            if(it!=nums_map.end()) ++cnt;
        }
        return cnt;
    }
};