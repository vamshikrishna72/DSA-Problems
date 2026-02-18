class Solution {
private:
    bool dfs(vector<int>& nums, int idx, vector<int>& dp) {
        int n = nums.size();
        if (idx >= n - 1) return true;
        if (dp[idx] != -1)
            return dp[idx];
        int maxJump = nums[idx];
        for (int i = 1; i <= maxJump; i++) {
            if (dfs(nums, idx + i, dp)) {
                return dp[idx] = 1;
            }
        }
        return dp[idx] = 0;
    }

public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return dfs(nums, 0, dp);
    }
};
