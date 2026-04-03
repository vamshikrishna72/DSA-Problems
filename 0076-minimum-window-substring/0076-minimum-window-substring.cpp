class Solution {
public:
    string minWindow(string s, string t) {
        int m=t.length(),n=s.length();
        int cnt=0,minLen=INT_MAX,startInd=-1;
        int l=0,r=0;
        vector<int>hash(256,0);
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r < n){

            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    startInd = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return startInd == -1?"":s.substr(startInd,minLen);
    }
};