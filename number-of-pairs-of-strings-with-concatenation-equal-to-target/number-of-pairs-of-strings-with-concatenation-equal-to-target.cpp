class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        int i,j;
    
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                 if(nums[i]+nums[j]==target)
                     count++;
            }
        }
        
        return count;
    }
};