class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int, long long> change;

        for (auto &seg : segments) {
            change[seg[0]] += seg[2];
            change[seg[1]] -= seg[2];
        }

        vector<vector<long long>> res;

        long long currColor = 0;
        int prev = -1;
        bool first = true;

        for (auto &[point, ch] : change) {
            if (!first && currColor > 0) {
                res.push_back({
                    (long long)prev,
                    (long long)point,
                    currColor
                });
            }

            currColor += ch;
            prev = point;
            first = false;
        }

        return res;
    }
};