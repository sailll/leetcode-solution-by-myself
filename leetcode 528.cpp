vector<int> weight;
int maxn;
class Solution {
public:
    Solution(vector<int> w) {
        weight = w;
        for(auto i:w) maxn = max(maxn, i);
        
    }
    
    int pickIndex() {
        int n = weight.size();
        int index;
        while(true){
            int cur_i = int(rand()%(n*maxn));
            if(weight[cur_i%n]-1>=cur_i/n){
                index = cur_i%n;
                break;
            }
        }
        return index;
    }
};