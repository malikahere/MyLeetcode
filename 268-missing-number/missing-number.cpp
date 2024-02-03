class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[n - 1] == n) {
                if (nums[i] != i) {
                    return i;
                }
            } else {
                return n;
            }
        }
        return 0;
    }
};