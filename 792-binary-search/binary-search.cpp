class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mid = n/2 ;
        if(nums[mid]<=target){
            for(int i = mid ; i<n ;i++){
                if(nums[i]==target){
                return i;}
            }
        }
        else if(nums[mid] > target){
            for(int i = 0; i<mid ;i++){
                 if(nums[i]==target){
                return i;}
            }
        }
        
        return -1;
    }
};