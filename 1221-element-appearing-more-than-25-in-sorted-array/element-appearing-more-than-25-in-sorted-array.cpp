class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int s = arr.size();
       int n = 0.25 * s ;
        unordered_map<int , int> count ;
        for (auto i : arr){
             if (count.find(i) != count.end()) {
            count[i]++;
        } else {
            count[i] = 1;
        }
        }
        for ( auto pair : count){
        if (pair.second > n){
            return pair.first ;
        }}
        return 0;
    }
};