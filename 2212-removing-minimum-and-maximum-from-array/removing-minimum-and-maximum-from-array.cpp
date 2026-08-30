class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIdx = 0, maxIdx = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] < nums[minIdx])
                minIdx = i;

            if (nums[i] > nums[maxIdx])
                maxIdx = i;
        }

        // Make minIdx the smaller index and maxIdx the larger index
        if (minIdx > maxIdx)
            swap(minIdx, maxIdx);

        // Remove both from the left
        int left = maxIdx + 1;

        // Remove both from the right
        int right = n - minIdx;

        // Remove min from left, max from right
        int bothSides = (minIdx + 1) + (n - maxIdx);

        return min({left, right, bothSides});
    }
};
