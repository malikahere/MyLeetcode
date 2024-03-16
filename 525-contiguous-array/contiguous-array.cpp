class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        map<int, int> m;
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == 0) {
                sum += -1;
            }
            else{
                sum += 1;
            }
            if(sum == 0) {
                ans = i+1;
            }
            else if(m.find(sum) != m.end()) {
                ans = max(ans, i-m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        return ans;
    }
};