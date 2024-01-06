class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
    
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
        arr.push_back({ endTime[i],startTime[i], profit[i]}); }
        sort(arr.begin() , arr.end());
           
           vector<int>dp(n,0);
        dp[0]= arr[0][2];
        for(int i = 1 ;i<n ; i++){
            int in = arr[i][2];
            int l = 0;
            int u = i-1;
            int f = -1;
            while(l<=u){
                int mid = l+ (u-l)/ 2;
                 if(arr[mid][0] <= arr[i][1])
                {
                   f = mid;             
                    l = mid + 1;
                }
                else
                {
                    u = mid - 1;
                }
            }

             if(f != -1)
            {
                in += dp[f];
            }
            
            
            
            
            
            dp[i] = max(in, dp[i-1]);
        }
        
      

        return dp[n-1 ];
     
    }
};