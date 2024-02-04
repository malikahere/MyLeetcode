class Solution {
public:
    string minWindow(string s, string t) {
         unordered_map<char, int> required, window;
    int left = 0, right = 0, formed = 0;
    int minLen = INT_MAX, minStart = 0;
    
    for (char c : t) {
        required[c]++;
    }
    
    while (right < s.length()) {
        char c = s[right];
        window[c]++;
        
        if (required.find(c) != required.end() && window[c] == required[c]) {
            formed++;
        }
        
        while (formed == required.size() && left <= right) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }
            
            char leftChar = s[left];
            window[leftChar]--;
            if (required.find(leftChar) != required.end() && window[leftChar] < required[leftChar]) {
                formed--;
            }
            
            left++;
        }
        
        right++;
    }
    
    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};