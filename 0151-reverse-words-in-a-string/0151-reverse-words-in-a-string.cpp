class Solution {
public:
    string reverseWords(string s) {
        int writeIdx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (writeIdx != 0) s[writeIdx++] = ' ';
                while (i < s.size() && s[i] != ' ') {
                    s[writeIdx++] = s[i++];
                }
            }
        }
        s.erase(s.begin() + writeIdx, s.end());
        int n = s.size();
        reverse(s.begin(),s.end());
        int l=0;
        
        for(int r=0;r<=n;r++){
            if(r==n || s[r] == ' '){
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        return s;

    }
};