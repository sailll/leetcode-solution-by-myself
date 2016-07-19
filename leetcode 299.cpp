class Solution{
  public:
        string getHint(string secret,string guess){
            int bullcount=0;
            int cowcount=0;
            int numbuff[10]={0};
            for(int i=0;i<guess.size();++i){
                if(secret[i]==guess[i]){
                    ++bullcount;
                }
                else{
                    ++numbuff[guess[i]-'0'];
                }
            }
            for(int i=0;i<secret.size();++i){
                if(secret[i]!=guess[i]&&numbuff[secret[i]-'0']){
                    ++cowcount;
                    --numbuff[secret[i]-'0'];
                }
            }
            char ans[20];
            sprintf(ans,"%dA%dB",bullcount,cowcount);
            return ans;
        }
};