class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto i : arr) {
            mp[i]++;
        }
        vector<int> v;
        for (auto i : mp) {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());

        int n = v.size();
         if (k == 0) {
            return n;
        }

        for (int i = 0; i < n; i++) {

            if (v[i] <= k) {
                k = k - v[i];
                v[i] = 0;

            } else {
                v[i] = v[i] - k;
                k = 0;
            }
        }
       
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                cnt++;
            }
        }
        return cnt;
    }
};