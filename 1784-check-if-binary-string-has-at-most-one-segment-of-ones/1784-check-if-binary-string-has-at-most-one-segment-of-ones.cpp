class Solution {
public:
    bool checkOnesSegment(string s) {
        int segment_count = 0;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0' && s[i+1] == '1') {
                return false; 
            }
        }
        return true;
    }
};