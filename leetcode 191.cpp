class Solution {
public:
    int hammingWeight(uint32_t n) {
      vector<int> tmp;
      while(n>=1){
          tmp.push_back(n%2);
          n/=2;
      }
      int ans=0;
      for(int i=0;i<tmp.size();++i){
          if(tmp[i]==1){
              ++ans;
          }
      }
      return ans;
    }
};