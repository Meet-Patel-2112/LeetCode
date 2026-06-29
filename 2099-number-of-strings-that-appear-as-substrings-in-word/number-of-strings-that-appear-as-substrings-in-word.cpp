class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for (auto i{0uz}; i < patterns.size(); ++i) {
            if (word.contains(patterns[i])) {
                ans++;
            }
        }
        return ans;
    }
};