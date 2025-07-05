class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<double, int>> ratioIndexPairs;
        for (int i = 0; i < n; i++) {
            double ratio = (double)val[i] / (double)wt[i];
            ratioIndexPairs.push_back({ratio, i});
        }
        sort(ratioIndexPairs.begin(), ratioIndexPairs.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
            return a.first > b.first;
        });
        double profit = 0.0;
        for (int i = 0; i < n && capacity > 0; i++) {
            int idx = ratioIndexPairs[i].second;
            if (wt[idx] <= capacity) {
                profit += val[idx];
                capacity -= wt[idx];
            } else {
                profit += ((double)capacity / wt[idx]) * val[idx];
                break;
            }
        }
        return profit;
    }
};