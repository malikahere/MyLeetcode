class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> star (n+2,0);
        for(auto x : edges){
            int a = x[0];
            int b = x[1];
            star[a]++;
            star[b]++;
        }
        for(int i =1 ; i<=n+1 ;i++ ){
            if (star[i]==n) 

           { return i;}
        }
        return -1;
    }
};