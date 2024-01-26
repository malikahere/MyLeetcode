class Solution {
public:
int M, N, MOD = 1000000007;
int solve(int startRow, int startCol, int maxMove, vector<vector<vector<int>>>&dp){
        if(startRow < 0 || startRow >= M || startCol < 0 || startCol >= N){
            return 1;
        }
        if(maxMove <= 0) return 0;

 if(dp[startRow][startCol][maxMove]!=-1) return dp[startRow][startCol][maxMove];

        long long left = solve(startRow, startCol-1, maxMove-1, dp);
        long long right = solve(startRow, startCol+1, maxMove-1, dp);
        long long up = solve(startRow-1, startCol, maxMove-1, dp);
        long long down = solve(startRow+1, startCol, maxMove-1, dp);
  
       return dp[startRow][startCol][maxMove] = (left + right + up + down) % MOD;
    }
int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
     M = m, N = n;
vector<vector<vector<int>>>dp(m+1, vector<vector<int>>(n+1, vector<int>(maxMove+1, -1)));
        return solve(startRow, startColumn, maxMove, dp);
    }
};