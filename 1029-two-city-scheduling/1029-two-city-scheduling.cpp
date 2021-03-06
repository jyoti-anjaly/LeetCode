class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
         int N = costs.size(), n = N/2, total = 0;
        vector<int> diff(N);
        for (int i = 0; i < N; ++i) {
            total += costs[i][0] + costs[i][1];
            diff[i] = costs[i][0] - costs[i][1];
        }
        sort(diff.begin(), diff.end());
        for (int i = 0; i < n; ++i) {
            total += diff[i];
        }
        for (int i = n; i < N; ++i) {
            total -= diff[i];
        }
        return total/2;
    }
};