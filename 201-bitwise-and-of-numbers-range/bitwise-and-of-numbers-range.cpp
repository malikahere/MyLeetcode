class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shiftAmount = 0;
        while(left != right){
            left = left >> 1;
            right = right >> 1;
            shiftAmount++;
        }
        return left << shiftAmount;
    }
};