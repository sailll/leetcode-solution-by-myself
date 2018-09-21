class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        int n = numCourses;
        map<int, vector<int>> inmap;
        map<int, vector<int>> outmap;
        for(int i=0;i<n;++i){
            inmap[i] = vector<int>();
            outmap[i] = vector<int>();
        }
        for(auto e:prerequisites){
            inmap[e.first].push_back(e.second);
            outmap[e.second].push_back(e.first);
        }
        vector<int> ans;
        bool done[n];
        memset(done,0,sizeof(done));
        queue<int> q;
        for(int i=0;i<n;++i){
            if(inmap[i].size()==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curn = q.front();
            q.pop();
            ans.push_back(curn);
            for(auto n:outmap[curn]){
                auto cit = find(inmap[n].begin(), inmap[n].end(), curn);
                inmap[n].erase(cit);
                if(inmap[n].size()==0) q.push(n);
            }
        }
        if(ans.size()==n){
            return ans;
        }
        return vector<int> ();
    }
};
