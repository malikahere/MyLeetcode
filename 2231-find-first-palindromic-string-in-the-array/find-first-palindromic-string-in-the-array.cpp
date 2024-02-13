class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         for (const string s : words) {
        int i = 0;
        int n = s.length() - 1;
        while (i < n) {
            if (s[i] != s[n])
                break;
            i++;
            n--;
        }
        if (i>= n) 
            return s;
    }
    return "";
    }
};