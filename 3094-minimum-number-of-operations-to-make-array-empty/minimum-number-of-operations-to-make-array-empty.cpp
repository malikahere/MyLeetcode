class Solution {
public:
    int minOperations(vector<int>& nums) {
         unordered_map<int, int> freq;
          int nop = 0;
        for (auto& num : nums) {freq[num]++;}

                   for(auto it:freq){
            if(it.second==1)return -1;
            if(it.second%3==0)nop+=it.second/3;
            else nop+=it.second/3+1;
        }
        return nop;

    }
};