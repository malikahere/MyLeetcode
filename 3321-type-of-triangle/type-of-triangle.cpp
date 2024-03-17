class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if ((a + b <= c) or (b + c <= a) or (a + c <= b)) {
            return "none";
        }

        else if ((a == b and a != c) or (b == c and b != a) or
                 (a == c and a != b)) {
            return "isosceles";
        } else if (a == b and b == c) {
            return "equilateral";
        } else {
            return "scalene";
        }
    }
};