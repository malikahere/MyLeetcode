class Solution {
public:
    string frequencySort(string s) {
        map<char , int> mp;
        for(auto i :s){
            mp[i]++;
        }
        priority_queue<pair<int , char>> pq;
        for(auto it:mp){
           pq.push({ it.second , it.first });
        }
        string ans ="";
        while(!pq.empty()){
            int t = pq.top().first;
            while(t--){
               ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};