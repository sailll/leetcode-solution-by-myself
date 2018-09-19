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
        while(true){
            bool flag = false;
            int curn = 0;
            for(int i=0;i<n;++i){
                if(done[i]) continue;
                if(inmap[i].size()==0){
                    flag = true;
                    curn = i;
                    ans.push_back(i);
                    done[i] = 1;
                    break;
                }
                
            }
            if(!flag) break;
            for(auto n:outmap[curn]){
                auto cit = find(inmap[n].begin(), inmap[n].end(), curn);
                inmap[n].erase(cit);
            }
            outmap[curn].clear();
        }
        if(ans.size()==n){
            return ans;
        }
        return vector<int> ();
    }
};