class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0;
        int startInd = -1,cnt=0;
        int minLen = INT_MAX;
        vector<int>hash(256,0);
        int n=s.length(),m=t.length();
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r < n){
            if(hash[s[r]] > 0) cnt++;
            hash[s[r]]--;
            while(cnt == m){
            if((r-l+1) < minLen){
                minLen=r-l+1;
                startInd=l;
            }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt--;
            l++;
        }
        r++;
        }
        return startInd == -1 ? "":s.substr(startInd,minLen);

    }
};