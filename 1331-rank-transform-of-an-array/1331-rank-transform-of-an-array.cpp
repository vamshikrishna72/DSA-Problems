class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n = a.size();
        if (n == 0)
            return {};
        vector<pair<int, int>> mpp;
        for (int i = 0; i < n; i++) {
            mpp.push_back({a[i], i});
        }

        sort(mpp.begin(), mpp.end());
        vector<int> ans(n);
        int cnt = 1;
        ans[mpp[0].second] = cnt;
        for (int i = 1; i < n; i++) {
            if (mpp[i].first != mpp[i - 1].first) {
                cnt++;
            }
            ans[mpp[i].second] = cnt;
        }

        return ans;
    }
};