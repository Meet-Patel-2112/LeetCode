class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int og = n;
        while (n > 0) {
            int a = n % 10;
            sum += a;
            product *= a;
            n = n / 10;
        }
        sum += product;
        return og % sum == 0;
    }
};