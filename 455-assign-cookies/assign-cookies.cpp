class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (s.size()==0){
            return 0;
        }
        sort(g.begin() , g.end());
        sort(s.begin(), s.end());
        int x = g.size()-1;
        int y = s.size()-1;
        int ans = 0;
        while (x>=0 and y>=0){
          if(s[y] >= g[x]){
            ans++ ;
            y-- ;
            x-- ;
          }
          else{
              x-- ;
          }
        }


      return ans;
    }
};