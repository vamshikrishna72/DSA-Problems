class Solution {
private:
    int dfs(int n,int idx,vector<int> &dp){
        if(idx == n) return 1;
        if(idx > n) return 0;
        if(dp[idx] != 0){
            return dp[idx];
        }
        int la = dfs(n,idx+1,dp);
        int ra = dfs(n,idx+2,dp);
        dp[idx] = la+ra;
        return dp[idx];
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        return dfs(n,0,dp);
    }
};