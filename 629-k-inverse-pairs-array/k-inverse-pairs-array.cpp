class Solution {
public:
     int mod = 1e9+7;
    int kInversePairs(int n, int k) {
       
        vector<vector<long long int>> dp(n+1 , vector<long long int> (k+1 , 0) );
        
            dp[0][0]=1;
            
        for(int i= 1 ; i<=n ;i++){          
             for(int j= 0 ; j<=k ;j++){
                  for( int rev=0 ; rev<i; rev++){
                      if(j>=rev){
                      dp[i][j] = ( dp[i][j]+ dp[i-1][j-rev]) % mod ;}
                  }
             }
        }
        return dp[n][k];
    }
};