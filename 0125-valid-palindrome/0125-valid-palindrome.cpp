class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(char c: s){
            if(isalnum(c)){
                st += tolower(c);
            }
        }
        if(st.empty()) return true;
        int l = 0;
        int r = st.size()-1;
        while(l<r){
            if(st[l] != st[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};