#include <string>
#include <iostream>
#include <vector>
using namespace std;
vector<int> naive_string_matching(string s,string pattern){
    int ls=s.length();
    int lp=pattern.length();
    vector<int> ans;
    for(int i=0;i<=ls-lp;++i){
        bool sen=true;
        for(int j=0;j<lp;++j){
            if(pattern[j]!=s[i+j]) sen=false;
        }
        if(sen) ans.push_back(i);
    }
    return ans;
}
int main(){
    string s;
    string pattern;
    cin>>s;
    cin>>pattern;
    for(int i=0;i<naive_string_matching(s,pattern).size();++i){
        cout<<naive_string_matching(s,pattern)[i]<<" ";
    }
    cout<<endl;
    return 0;
}