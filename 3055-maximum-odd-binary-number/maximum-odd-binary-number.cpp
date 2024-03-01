class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         int count1 = std::count(s.begin(), s.end(), '1');
        string res = s;
        for (int i = 0; i < s.length(); i++){
            if (i < count1 - 1 || i == s.length() - 1) res[i] = '1';
            else res[i] = '0';
        }
        return res;
    }
};