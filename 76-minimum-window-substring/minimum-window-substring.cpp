class Solution {
public:
    string minWindow(string s, string t) {
         unordered_map<char, int> req, window;
    int left = 0, right = 0, formed = 0;
    int minLen = INT_MAX, minStart = 0;
    
    for (char c : t) {
        req[c]++;
    }
    
    while (right < s.length()) {
        char c = s[right];
        window[c]++;
        
        if (req.find(c) != req.end() && window[c] == req[c]) {
            formed++;
        }
        
        while (formed == req.size() && left <= right) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }
            
            char leftChar = s[left];
            window[leftChar]--;
            if (req.find(leftChar) != req.end() && window[leftChar] < req[leftChar]) {
                formed--;
            }
            
            left++;
        }
        
        right++;
    }
    
    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};