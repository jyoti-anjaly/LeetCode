class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int s=nums[0];
        int count=0;
        for(int i=1;i<n;i++){
            if(s-nums[i]>k){
                s=nums[i];
                count++;
            }
        }
        count++;
        return count;
    }
    
};