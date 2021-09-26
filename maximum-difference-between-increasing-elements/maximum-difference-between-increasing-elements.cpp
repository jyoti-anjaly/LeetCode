class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(),diff=0;
        
        for(int i=0;i<n;i++)
        {
          for(int j=i;j<n;j++)
          {
              if(nums[j]>nums[i])
                 // int diff=nums[j]-nums[i];
             diff=max(diff, nums[j]-nums[i]);
         
          }
        }
        return (diff == 0) ? -1 : diff;
    }
};