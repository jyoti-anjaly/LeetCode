class Solution {
public:
    int uniquePaths(int m, int n) {
         vector<int> ans(n, 1);
        for(int i=1;i<m;i++)
            for(int j=1; j<n;j++)
                ans[j] += ans[j-1];
        return ans[n-1];
    }
};