class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
 int n = nums.size();
    unordered_set<int> numSet;
    int duplicate = -1;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num;
        if (numSet.find(num) != numSet.end()) {
            duplicate = num;
        }
        numSet.insert(num);
    }

    int missing = expectedSum - (actualSum - duplicate);

    return {duplicate, missing};
    }
};