class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
         vector<vector<pair<int,int>>> adj(n);
        for (auto it : meetings) {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }

        set<pair<int,int>>s;
        s.insert({0, 0});
        s.insert({0, firstPerson});

        vector<int> knows(n, 0);

        while (!s.empty()) {
            auto it = s.begin();
            int time=it->first; 
            int person=it->second;
            s.erase(it);
            if (knows[person]) continue;
            knows[person] = true;
            for (auto it : adj[person]) {
                if (!knows[it.first] && it.second >= time) {
                    s.insert({it.second, it.first});
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            if (knows[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};