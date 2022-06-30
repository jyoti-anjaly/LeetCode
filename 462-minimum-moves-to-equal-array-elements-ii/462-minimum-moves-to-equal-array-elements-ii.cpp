class Solution {
public:
    int minMoves2(vector<int>& nums) {
         int cnt=0;
        sort(nums.begin(),nums.end());
        int mid = (nums.size()-1)/2;
        int midval = nums[mid];
        for(int i=0;i<mid;i++){
            cnt += midval-nums[i];
        }
        for(int i=mid+1;i<nums.size();i++){
           cnt += nums[i]-midval;
        }
        return cnt;
    }
};