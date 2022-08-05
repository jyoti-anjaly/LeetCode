class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
         int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<long long> dp(target+1, 0);
        dp[0]=1;
        for(int i=1; i<=target; i++) {
            for(auto j: nums) {
                if(j>i)break;
                dp[i] += dp[i-j];
                dp[i] %= 2147483647;
            }
        }
        return dp[target];
    }
};