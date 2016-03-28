class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector<int> a;
      int len=nums.size();
      int i=0;
      while(i<len)
      {
          if(nums[i]==0)
          {
            a.push_back(i);
          }
          i++;
      }
      std::vector<int>::iterator it=nums.begin();
      int l1=a.size();
      for(int j=0;j<l1;j++)
      {
          nums.erase(it+a[j]-j);
      }
      for(int j=0;j<l1;j++)
      {
          int fa=0;
          nums.push_back(fa);
      }
    }
};