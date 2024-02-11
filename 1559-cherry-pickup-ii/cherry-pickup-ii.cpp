class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<int>> dp(cols, vector<int>(cols, 0));

    for (int row = rows - 1; row >= 0; --row) {
        vector<vector<int>> new_dp(cols, vector<int>(cols, 0));
        for (int col1 = 0; col1 < cols; ++col1) {
            for (int col2 = 0; col2 < cols; ++col2) {
                int max_cherries = 0;
                for (int d1 = -1; d1 <= 1; ++d1) {
                    for (int d2 = -1; d2 <= 1; ++d2) {
                        int new_col1 = col1 + d1;
                        int new_col2 = col2 + d2;
                        if (new_col1 >= 0 && new_col1 < cols && new_col2 >= 0 && new_col2 < cols) {
                            max_cherries = max(max_cherries, dp[new_col1][new_col2]);
                        }
                    }
                }
                new_dp[col1][col2] = max_cherries + grid[row][col1] + (col1 != col2 ? grid[row][col2] : 0);
            }
        }
        dp = move(new_dp);
    }

    return dp[0][cols - 1];
    }
};