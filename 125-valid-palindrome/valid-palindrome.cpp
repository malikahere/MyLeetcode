class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.size()-1;
        int i=0;

        while (i<j){
            if (!isalnum(s[i])) i++;
            else if (!isalnum(s[j])) j--;
            else if (tolower(s[i++]) != tolower(s[j--])) return false;
        }
        return true;
    
    }
};