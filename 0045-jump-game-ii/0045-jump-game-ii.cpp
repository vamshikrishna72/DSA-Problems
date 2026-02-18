class Solution {
private:
    int dfs(vector<int>& nums, int ind, vector<int>& dp) {
        int n = nums.size();
        if (ind >= n - 1) return 0;
        if (dp[ind] != -1) return dp[ind];
        int minJumps = INT_MAX;
        
        for (int step = 1; step <= nums[ind]; step++) {
            int next = ind + step;
            if (next < n) {
                int jumps = dfs(nums, next, dp);
                if (jumps != INT_MAX)
                    minJumps = min(minJumps, 1 + jumps);
            }
        }
        
        return dp[ind] = minJumps;
    }

public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return dfs(nums, 0, dp);
    }
};
