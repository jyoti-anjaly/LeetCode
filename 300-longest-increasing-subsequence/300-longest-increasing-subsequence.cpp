class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
        vector<int> res;
        res.push_back(nums[0]);
        for(int i=0;i<n;i++){
            if(nums[i]>res.back()){
                res.push_back(nums[i]);
            }
            else{
                int idx=lower_bound(res.begin(),res.end(),nums[i])-res.begin();
                res[idx]=nums[i];
            }
        }
        return res.size();
    }
};