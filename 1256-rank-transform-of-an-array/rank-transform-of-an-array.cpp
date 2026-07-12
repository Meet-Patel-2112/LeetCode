class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) {
            return arr;
        }
        unordered_map<int, int> numAndRanks;
        vector<int> sortedArray = arr;
        sort(sortedArray.begin(), sortedArray.end());
        int rank = 1;
        numAndRanks[sortedArray[0]] = rank;

        for (auto i{1uz}; i < sortedArray.size(); i++) {
            rank++;
            if (sortedArray[i] == sortedArray[i - 1]) {
                rank--;
                continue;
            }
            numAndRanks[sortedArray[i]] = rank;
        }

        for (auto i{0uz}; i < arr.size(); i++) {
            arr[i] = numAndRanks[arr[i]];
        }
        return arr;
    }
};