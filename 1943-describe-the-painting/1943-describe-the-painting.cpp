class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int, long long> diff;

        for (auto &seg : segments) {
            diff[seg[0]] += seg[2];
            diff[seg[1]] -= seg[2];
        }

        vector<vector<long long>> res;

        long long currColor = 0;
        int prev = -1;
        bool first = true;

        for (auto &[point, change] : diff) {
            if (!first && currColor > 0) {
                res.push_back({
                    (long long)prev,
                    (long long)point,
                    currColor
                });
            }

            currColor += change;
            prev = point;
            first = false;
        }

        return res;
    }
};