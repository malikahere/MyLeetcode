class Solution {
public:
    vector<int> dp;
    int sol(int n){
      if(n<=3){
          return n ;
      }
      if(dp[n]!= -1){
          return dp[n];
      }
      int ans=n;
        for(int i =1 ; i*i <=n ; i++){
            ans = min(ans , 1+sol(n-i*i));
        }

        return dp[n] = ans;
    }
    int numSquares(int n) {
        dp = vector<int>(n+1 , -1);
        return sol(n);     
    }
};