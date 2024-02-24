class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> star(n + 2, 0);
        for (auto x : edges) {
            star[x[0]]++;
            star[x[1]]++;
        }
        for (int i = 1; i <= n + 1; i++) {
            if (star[i] == n)

            {
                return i;
            }
        }
        return -1;
    }
};