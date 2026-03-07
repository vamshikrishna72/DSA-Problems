class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int diff1 = 0, diff2 = 0;
        int res = INT_MAX;
        int l = 0;

        for (int r = 0; r < 2 * n; r++) {
            
            char expected1 = (r % 2) ? '1' : '0'; // pattern 0101...
            char expected2 = (r % 2) ? '0' : '1'; // pattern 1010...

            if (t[r] != expected1) diff1++;
            if (t[r] != expected2) diff2++;

            if (r - l + 1 > n) {
                char leftExpected1 = (l % 2) ? '1' : '0';
                char leftExpected2 = (l % 2) ? '0' : '1';

                if (t[l] != leftExpected1) diff1--;
                if (t[l] != leftExpected2) diff2--;

                l++;
            }

            if (r - l + 1 == n) {
                res = min(res, min(diff1, diff2));
            }
        }

        return res;
    }
};