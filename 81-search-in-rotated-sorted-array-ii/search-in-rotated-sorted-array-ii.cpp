class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int l =0 , h=n-1;
        while(l<=h){
        int mid = l+(h-l) /2;
        if (nums[mid] == target) return true;
        if(nums[mid]>target){
            h = mid-1 ;
        }
        else{
            l = mid+1;
        }
        }
        return false;
    }
};