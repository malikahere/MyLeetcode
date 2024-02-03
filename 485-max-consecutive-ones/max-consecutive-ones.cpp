class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i ;
        int sum=0 , ans=0;
        int n = nums.size();
        for(i=0 ; i<n ;i++){

         if (nums[i]==1){
             sum++;
         }
         else{
             sum=0;
             continue;
         }
         ans = max(ans,sum);
        }
        return ans;
    }
};