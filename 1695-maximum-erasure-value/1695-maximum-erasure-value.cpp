class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0, r = 0, maxSum = 0, tempSum = 0;
        vector<int> occurences(1e4+1, 0);
        while (r < nums.size()) 
			if (occurences[nums[r]] == 0) {
                occurences[nums[r]]++;
                tempSum += nums[r];
                maxSum = max(maxSum, tempSum);
                r++;
            } else {
                occurences[nums[l]]--;
                tempSum -= nums[l];
                l++;
            }
        return maxSum;
    }
};