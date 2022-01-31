class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        while(true){
            // original*=2;
            int pos=binary_search(nums,original);
            if(nums[pos]!=original) break;
                original*=2;
                
        }
        return original;
    }
    
    int binary_search(vector<int>arr, int target)
    {
        int left=0;
        int right=arr.size()-1;
        while(left<right)
        {
            int mid=left + (right - left)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) right=mid;
            else left=mid+1;
        }
        return left;
    }
};