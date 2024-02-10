class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
        count++;
    }

    for (int length = 2; length <= n; ++length) {
        for (int start = 0; start < n - length + 1; ++start) {
            int end = start + length - 1;

            if (length == 2) {
                dp[start][end] = s[start] == s[end];
            } else {
                dp[start][end] = (s[start] == s[end]) && dp[start + 1][end - 1];
            }

            if (dp[start][end]) {
                count++;
            }
        }
    }

    return count;
    }
};