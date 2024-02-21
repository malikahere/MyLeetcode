class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n = nums.size();
        int mid = n/2 ;
        if(nums[mid]<=x){
            for(int i = mid ; i<n ;i++){
                if(nums[i]>x or nums[i]==x){
                return i;
				}
                 }
				 
        }
        else if(nums[mid] >x){
            for(int i = 0; i<mid+1 ;i++){
                 if(nums[i]>x or nums[i]==x){
                return i;}
            }
        }
        
         return n;
    }
};