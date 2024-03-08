class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        int mx = 0;
        for (auto it:mp){
        if(it.second>mx){
            mx = it.second;
        }
        }
        int sum=0;
        for (auto it:mp){
             if(it.second==mx){
                 sum += it.second;
             }
        }

      return sum;
    }
};