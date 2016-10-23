class Solution {
public:
    bool judge(string t,int dofp[256]){
        int dict[256];
        memset(dict,0,sizeof(dict));
        for(int i=0;i<t.length();++i){
            dict[t[i]]++;
        }
        for(int i=0;i<256;++i){
            if(dict[i]!=dofp[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.length()<p.length()) return ans;
        int dofp[256];
        memset(dofp,0,sizeof(dofp));
        for(int i=0;i<p.length();++i){
           dofp[p[i]]++; 
        }
        for(int i=0;i<s.length()-p.length()+1;++i){
            string t=s.substr(i,p.length());
            if(judge(t,dofp)) ans.push_back(i);
        }
        return ans;
    }
};