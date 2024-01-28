class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
    int n = matrix[0].size();
    
    // Calculate prefix sums
    vector<vector<int>> prefix_sums(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            prefix_sums[i][j] = matrix[i - 1][j - 1] + prefix_sums[i - 1][j] + prefix_sums[i][j - 1] - prefix_sums[i - 1][j - 1];
        }
    }
    
    int count = 0;
    for (int top_row = 1; top_row <= m; ++top_row) {
        for (int bottom_row = top_row; bottom_row <= m; ++bottom_row) {
            unordered_map<int, int> seen;
            for (int col = 1; col <= n; ++col) {
                int current_sum = prefix_sums[bottom_row][col] - prefix_sums[top_row - 1][col];
                if (current_sum == target)
                    count++;
                if (seen.find(current_sum - target) != seen.end())
                    count += seen[current_sum - target];
                seen[current_sum]++;
            }
        }
    }
    
    return count;
    }
};