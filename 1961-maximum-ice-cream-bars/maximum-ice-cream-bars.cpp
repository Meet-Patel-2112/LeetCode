class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int bars = 0;

        for(int cost : costs){
            if(cost <= coins){
                bars++;
                coins -= cost;
            }
        }

        return bars;
    }
};