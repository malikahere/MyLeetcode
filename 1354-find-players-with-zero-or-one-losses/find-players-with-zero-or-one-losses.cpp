class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      unordered_map<int, int> mp;
        vector<int> v1, v2;
        int n = matches.size();
        for(int i=0;i<n;i++) {
            mp[matches[i][0]];
            mp[matches[i][1]]++;
        }
        for(auto x: mp){
            if(x.second==0) v1.push_back(x.first);
            else if(x.second==1) v2.push_back(x.first);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        return {v1, v2};
    }
    
};