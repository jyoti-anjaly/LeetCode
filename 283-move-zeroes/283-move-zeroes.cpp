class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int mark = 0;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                nums[mark] = nums[i];
                mark++;
            }
        }
        
        for(int j=mark; j<n; j++)
            nums[j] = 0;
    }
};