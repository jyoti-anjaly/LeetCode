class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0], maxEle = nums[0];
        
        for(int i=1; i<n; i++)
        {
            maxEle = max(maxEle + nums[i], nums[i]);
            res = max(maxEle, res);
        }
        return res;
    }
};