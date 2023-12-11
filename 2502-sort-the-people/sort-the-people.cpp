class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        map <int , string> record ;
        for (size_t i = 0; i < heights.size(); ++i) {
        record [heights[i]] = names[i];
    }
    vector<string> sortedarr;
        for ( auto i = record.rbegin(); i != record.rend() ; i++){
            sortedarr.push_back(i->second) ;
        }
            return sortedarr ;
        
    }
};