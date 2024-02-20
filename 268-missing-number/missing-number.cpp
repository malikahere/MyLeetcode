class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int expSum = n*(n+1)/2 ;
        int sum=0;
        for (int i = 0; i < n; i++) {
              sum = sum+nums[i] ;
            }
            if(sum!= expSum){
                return expSum - sum ;
            }
             return 0;
        }
       
        
    
};