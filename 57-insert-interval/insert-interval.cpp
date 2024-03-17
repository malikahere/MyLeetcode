class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         intervals.push_back({newInterval[0], newInterval[1]});
        if(intervals.empty()){
            return {};
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for(auto x: intervals){
            if(x[0] <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1], x[1]);
            }
            else{
                ans.push_back(x);
            }
        }
        return ans;
        
    }
};