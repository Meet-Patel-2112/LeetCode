class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        int count = 1;
        while (n > 0) {
            int a = n % 10;
            sum += a;
            if (a > 0) {
                x += a * count;
                count *= 10;
            }
            n /= 10;
        }
        return x * sum;
    }
};