class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans;
        int l = 0;
        int h= n-1;
        while(l<=h){
            if(abs(nums[l])>=abs(nums[h])){
                ans.push_back(nums[l]*nums[l]);
                l++;
            }
            else{
                ans.push_back(nums[h]*nums[h]);
                h--;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};