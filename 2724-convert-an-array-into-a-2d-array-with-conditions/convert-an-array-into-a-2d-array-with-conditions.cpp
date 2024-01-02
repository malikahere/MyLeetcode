class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       vector<vector<int>> ans;
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
        if (ans.size() < mp[i])
        {
            ans.push_back({});
        }
        ans[mp[i] - 1].push_back(i);
    }
    return ans;
    }
};