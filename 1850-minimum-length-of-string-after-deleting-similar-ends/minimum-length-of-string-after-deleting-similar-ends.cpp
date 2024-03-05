class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int l =0;
        int h= n-1;
       while(l<h and s[l]==s[h]){
           char c = s[l];
           while(l<=h and s[l]==c){
               l++;
           }
            while(l<=h and s[h]==c){
               h--;
           }
       }
       return h-l +1;
    }
};