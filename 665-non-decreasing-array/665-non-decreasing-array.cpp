class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
      if(nums.size()==1)  return true;
        int count = 0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] > nums[i+1]) {
                if(i-1 > -1){
                    if (nums[i-1] > nums[i+1])   nums[i+1] = nums[i] + 1;
                    else    nums[i] = nums[i] - (nums[i-1]+nums[i+1])/2;
                }                
                count++;
                if(count>1) return false;
            }
        }
        return true;
    }
};