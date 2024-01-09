class Solution {
public:
    bool isPalindrome(int x) {
          string d = to_string(x);
         string m = string(d.rbegin(), d.rend());
  

 if (d == m){
   return true ;
 }
 else{
   return false;
 }
    }
};