class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      
        sort(g.begin() , g.end());
        sort(s.begin(), s.end());
        int x = 0 , y =0 ;
        
        while (x<s.size() && y<g.size()){
          if(s[x] >= g[y]){
            y++ ;
            x++ ;
          }
          else{
              x++ ;
          }
        }


      return y;
    }
};