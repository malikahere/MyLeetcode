class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int n = nums.size();
    vector<int> result(n, 1);

    
    unordered_map<int, int> leftProduct, rightProduct;

    int ptol = 1;
    for (int i = 0; i < n; ++i) {
        leftProduct[i] = ptol;
        ptol *= nums[i];
    }

    
    int ptor = 1;
    for (int i = n - 1; i >= 0; --i) {
        rightProduct[i] = ptor;
        ptor *= nums[i];
    }

    for (int i = 0; i < n; ++i) {
        result[i] = leftProduct[i] * rightProduct[i];
    }

    return result;
}
    
};