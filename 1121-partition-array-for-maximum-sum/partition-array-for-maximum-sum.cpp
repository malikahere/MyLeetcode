class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1 , 0);

         for (int i = n-1; i >=0; i--) {
            int curMax = 0 , cur=0;
              int  window=0;
            for (int j = i; j <min(n, i +k); j++) {
                curMax = max(curMax, arr[j]);
                window++;
                cur = max(cur , curMax * window + dp[j+1]);

            }
            dp[i] = cur;
        }

        return dp[0];
    }
};