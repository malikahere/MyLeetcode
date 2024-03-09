class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i=0 , j=0;
        while(i<n and j<m){
           if(nums1[i]<nums2[j]){
              i++;
           }
           else if (nums1[i]>nums2[j]){
              j++;
           }
           else{
               return nums2[j];
               break;
           }
        }
        return -1;
    }
};