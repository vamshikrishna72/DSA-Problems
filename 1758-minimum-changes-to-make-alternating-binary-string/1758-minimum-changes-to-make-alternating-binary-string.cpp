class Solution {
public:
    int minOperations(string s) {
        int cost10 = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (s[i] - '0' != i % 2) {
                cost10++;
            }
        }
        return min(cost10, n - cost10);
    }
};
