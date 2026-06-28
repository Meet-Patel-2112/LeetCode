class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int maxVal = 1;

        for (auto i{1uz}; i < arr.size(); ++i) {
            if (arr[i] >= maxVal + 1) {
                maxVal++;
            }
        }

        return maxVal;
    }
};