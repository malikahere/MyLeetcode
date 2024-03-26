class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(int j=1;j<=n+1;j++)
        {
            if(s.find(j)==s.end())
            return j;
        }
        return 0;
    }
};