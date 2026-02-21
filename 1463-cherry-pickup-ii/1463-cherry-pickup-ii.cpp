class Solution {
public:
    int rows, cols;
    int dp[71][71][71];
    
    int solve(int r, int c1, int c2, vector<vector<int>>& grid) {
        
        if (c1 < 0 || c2 < 0 || c1 >= cols || c2 >= cols)
            return 0;
        
        if (dp[r][c1][c2] != -1)
            return dp[r][c1][c2];
        
        int cherries = 0;
        
        if (c1 == c2)
            cherries = grid[r][c1];
        else
            cherries = grid[r][c1] + grid[r][c2];
        
        if (r == rows - 1)
            return dp[r][c1][c2] = cherries;
        
        int maxCherries = 0;
        
        for (int move1 = -1; move1 <= 1; move1++) {
            for (int move2 = -1; move2 <= 1; move2++) {
                int next = solve(r + 1, c1 + move1, c2 + move2, grid);
                maxCherries = max(maxCherries, next);
            }
        }
        
        return dp[r][c1][c2] = cherries + maxCherries;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        
        memset(dp, -1, sizeof(dp));
        
        return solve(0, 0, cols - 1, grid);
    }
};