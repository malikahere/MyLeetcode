class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map <char , int> ct;
        for( auto i : words){
            for( auto it : i){
                ct[it]++ ;
            }
        }

       int n = words.size();
        for (auto i : ct){
         if ( i.second % n != 0){
             return false;
         }
        }
        return true;
    }
};