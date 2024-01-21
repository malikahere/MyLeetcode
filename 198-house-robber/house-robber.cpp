class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0;
        for (int i=0; i< nums.size();i++) {
            int t = b;
            b = max(a + nums[i], b);
            a = t;
        }
        return max(a, b);
    }
};