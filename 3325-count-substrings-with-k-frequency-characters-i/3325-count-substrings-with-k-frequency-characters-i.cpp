class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int ans = 0;
        int l=0;
        vector<int>mp(26,0);
        for(int r = 0;r<s.size();r++){
            mp[s[r]-'a']++;
            while(mp[s[r]-'a'] >= k){
                mp[s[l]-'a']--;
                
                l++;
            }
            ans = ans+l;
       
        }
        return ans;

    }
};