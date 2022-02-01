class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        int sum;
        for(int i=0;i<nums.size();i++)
        {
            sum=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==sum)
                {
                     index.push_back(i);
                     index.push_back(j);
                }
            }
            if(index.size()==2)
                break;
        }
        return index;
    }
};