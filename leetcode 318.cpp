class Solution {
public:
    int maxProduct(vector<string>& words) {
    int res=0;
    long len=words.size();
    for(int i=0;i<len-1;i++)
    {
        int l1=words[i].size();
        for(int j=i+1;j<len;j++)
        {
            int in=0;
            int l2=words[j].size();
            for(int k=0;k<l1;k++)
            {
                for(int l=0;l<l2;l++)
                {
                    if(words[i][k]==words[j][l])
                    {
                        in=1;
                        break;
                    }
                }
                if(in) break;
            }
            if(in) continue;
            res=max(l1*l2,res);
        }
    }
    return res;
    }
};