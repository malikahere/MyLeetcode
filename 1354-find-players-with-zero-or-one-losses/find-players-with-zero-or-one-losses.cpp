class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
      unordered_map<int, int> umap;
        vector<int> v1, v2;
        int n = m.size();
        for(int i=0;i<n;i++) {
            umap[m[i][0]];
            umap[m[i][1]]++;
        }
        for(auto x: umap){
            if(x.second==0) v1.push_back(x.first);
            else if(x.second==1) v2.push_back(x.first);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        return {v1, v2};
    }
    
};