class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
          int n=nums.size();
        for(int i=0; i<n; i++){
            int element = nums[i];
           
            if(element >=1 && element <= n)
            {
            int chair = element-1;
            if(nums[chair]!= element)
            {
                swap( nums[chair],nums[i]);
                i--;
               }
            }
        }
      int i=0;
      while(i<n)
      { if(nums[i]==INT_MIN ) return i+1;
        if( nums[i]>INT_MIN && nums[i]-1!=i)
        {
            return i+1;
        }
        i++;
      }
      if(i>=n)
      {
        return i+1;
      }
     return 0;
    }
};