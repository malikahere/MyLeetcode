class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> first_values;

    
    for (const auto& inner_vector : points) 
        {
            first_values.push_back(inner_vector[0]);
        }
    
    sort(first_values.begin() , first_values.end());
    int n = 0 ;
     for (size_t i = 1; i < first_values.size(); ++i) {
       if (first_values[i] - first_values[i - 1] >= n ) {
           n = first_values[i] - first_values[i - 1];
       }
    }
    return n;
    }
};