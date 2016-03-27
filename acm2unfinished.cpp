#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int max(int a,int b);
class solution
{
public:
    int solve(vector<int> &a)
    {
        int temp=1;
        long len=a.size();
        for(int i=0;i<len-1;i++)
        {
            int count=1;
            for(int j=0;j<temp;j++)
            {
                for(int l=j+1;l<=temp;l++)
                {
                  if(a[i+j]!=a[i+l])
                  {
                  count++;
                  temp=max(count,temp);
                  }
                  else count=1;
                }
            }
        }
        return temp;
    }
};
int main()
{
    solution po;
    vector<int> ans;
    vector<int> in;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int len;
        scanf("%d",&len);
        for(int j=0;j<len;j++)
        {
            int t;
            scanf("%d",&t);
            in.push_back(t);
        }
        ans.push_back(po.solve(in));
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}