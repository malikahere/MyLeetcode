class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (s.size()==0 or g.size()==0){
            return 0;
        }
        sort(g.begin() , g.end());
        sort(s.begin(), s.end());
        int x = 0 , y =0 ;
        
        while (x<s.size() and y<g.size()){
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