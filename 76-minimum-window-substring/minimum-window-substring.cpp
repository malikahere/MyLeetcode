class Solution {
public:
    string minWindow(string s, string t) {
         vector<int> required(128, 0), window(128, 0);
    int left = 0, right = 0, formed = 0;
    int minLen = INT_MAX, minStart = 0;
    
    for (char c : t) {
        required[c]++;
    }
    
    while (right < s.length()) {
        char c = s[right];
        window[c]++;
        
        if (window[c] <= required[c]) {
            formed++;
        }
        
        while (formed == t.length() && left <= right) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }
            
            char leftChar = s[left];
            window[leftChar]--;
            if (window[leftChar] < required[leftChar]) {
                formed--;
            }
            
            left++;
        }
        
        right++;
    }
    
    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};