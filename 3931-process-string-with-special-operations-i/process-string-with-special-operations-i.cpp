class Solution {
public:
    bool isAlphabet(char c) {
        if (c >= 'a' || c <= 'z') {
            return true;
        }
        return false;
    }
    string processStr(string s) {
        string result = "";

        for (auto i{0uz}; i < s.length(); ++i) {
            if (s[i] == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } else if (s[i] == '#') {
                result += result;
            } else if (s[i] == '%') {
                reverse(result.begin(), result.end());
            } else if (isAlphabet(s[i])) {
                result += s[i];
            }
        }

        return result;
    }
};