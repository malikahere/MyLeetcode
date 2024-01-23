class Solution {
public:
    int maxLength(vector<string>& arr) {
         int result = 0;
        std::vector<int> dp = {0};  

        for (const string& s : arr) {
            int bitmask = 0, duplicate = 0;

            for (char ch : s) {
                int bit = 1 << (ch - 'a');

                if ((bitmask & bit) > 0) {
                    duplicate = 1;
                    break; 
                }

                bitmask |= bit;
            }

            if (duplicate) continue;

            for (int i = dp.size() - 1; i >= 0; --i) {
                if ((dp[i] & bitmask) == 0) {
                    dp.push_back(dp[i] | bitmask);
                    result = max(result, __builtin_popcount(dp.back()));
                }
            }
        }

        return result;
    }
};