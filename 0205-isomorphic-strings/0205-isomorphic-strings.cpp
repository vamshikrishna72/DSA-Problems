class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>lastS(256,0);
        vector<int>lastT(256,0);
        for(int i=0;i<s.size();i++){
            if(lastS[s[i]] != lastT[t[i]]) return false;
            lastS[s[i]]=i+1;
            lastT[t[i]]=i+1;
        }
        return true;
    }
};