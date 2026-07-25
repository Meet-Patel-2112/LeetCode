class Solution {
public:
    static bool compare(int a, int b) { return a > b; }
    int maxProduct(int n) {
        vector<int> digits;

        while (n > 0) {
            int a = n % 10;
            digits.push_back(a);
            n /= 10;
        }

        sort(digits.begin(), digits.end(), compare);

        return digits[0] * digits[1];
    }
};