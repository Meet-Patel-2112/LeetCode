class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for (auto& n : nums) {
            freq[n]++;
        }

        int ans = 1;

        if (freq.count(1)) {
            int cnt = freq[1];
            ans = max(ans, cnt % 2 ? cnt : cnt - 1);
        }

        for (auto& f : freq) {
            if (f.first == 1)
                continue;
            long long x = f.first;

            int len = 0;

            while (freq.count(x) && freq[x] > 1) {
                len += 2;
                if (x > 1e9)
                    break;
                x *= x;
            }

            if (freq.count(x)) {
                len++;
            } else {
                len--;
            }

            ans = max(ans, len);
        }
        return ans;
    }
};