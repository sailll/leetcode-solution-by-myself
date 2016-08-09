class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();++i){
            ++a[nums[i]];
        }
        priority_queue<pair<int,int>> pq;
        for(unordered_map<int,int>::iterator it=a.begin();it!=a.end();++it){
            pq.push(pair<int,int>(it->second,it->first));
        }
        vector<int> ans;
        for(int i=0;i<k;++i){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};