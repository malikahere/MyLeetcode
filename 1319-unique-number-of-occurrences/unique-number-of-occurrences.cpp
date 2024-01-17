class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        vector<int> sol;
        for (auto i: arr){
           mp[i]++;
        }
        for(auto i:mp){
            sol.push_back(i.second);
        }
         sort(sol.begin(),sol.end());
        for(int i = 1 ; i < sol.size() ;i++){
            if(sol[i-1] == sol[i]){
                return false;
            }
        
        }
        return true;
    }
        
};