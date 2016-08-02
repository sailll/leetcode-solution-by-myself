class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        for(int i=len-1;i>=0;--i){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]++;
                break;
            }
        }
        if(digits[0]==0){
            vector<int> ans;
            ans.push_back(1);
            for(int i=0;i<len;++i){
                ans.push_back(0);
            }
            return ans;
        }
        else{
            return digits;
        }
    }
};