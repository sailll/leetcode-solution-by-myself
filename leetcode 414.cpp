class Solution {
public:
    vector<int> convert(vector<int> &nums){
        vector<int> ans;
        map<int,int> dict;
        for(int i=0;i<nums.size();++i){
            dict[nums[i]]++;
        }
        for(auto it=dict.begin();it!=dict.end();++it){
            ans.push_back(it->first);  
        }
        return ans;
    }
    int thirdMax(vector<int>& nums) {
        vector<int> ans(convert(nums));
        if(ans.size()<3){
            int tmp=INT_MIN;
            for(int i=0;i<ans.size();++i){
                tmp=max(tmp,ans[i]);
            }
            return tmp;
        }
        for(int i=0;i<3;++i){
            int tmp=INT_MIN;
            int index=0;
            for(int j=0;j<ans.size();++j){
                index=ans[j]>tmp?j:index;
            }
            if(i<2) ans.erase(ans.begin()+index);
            else return ans[index];
        }
        return 0;
    }
};