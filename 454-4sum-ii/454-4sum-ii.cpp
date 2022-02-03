class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)     {
        int count = 0;
        unordered_map<int, int> sums;
        for(int i : nums1) for(int j : nums2) sums[i+j]++;
        for(int i : nums3) for(int j : nums4) count+=sums[-(i+j)];
        return count;
    }
};