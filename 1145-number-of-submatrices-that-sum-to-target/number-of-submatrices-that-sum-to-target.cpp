class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
    int n = matrix[0].size();
    
    int count = 0;
    for (int top = 0; top < m; ++top) {
        vector<int> row_sum(n, 0);
        for (int bottom = top; bottom < m; ++bottom) {
            unordered_map<int, int> prefix_sum_count;
            int current_sum = 0;
            for (int col = 0; col < n; ++col) {
                row_sum[col] += matrix[bottom][col];
                current_sum += row_sum[col];
                if (current_sum == target)
                    count++;
                if (prefix_sum_count.find(current_sum - target) != prefix_sum_count.end())
                    count += prefix_sum_count[current_sum - target];
                prefix_sum_count[current_sum]++;
            }
        }
    }
    
    return count;
    }
};