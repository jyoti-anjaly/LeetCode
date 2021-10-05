class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        vector<int>ans;
        int i=-1, j=-1;
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
              int mid=(l+r)/2;
              if(nums[mid]==target){
                  i=mid;
                  r=mid-1;
              }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
            
        }
        l=0;r=nums.size()-1;
         while(l<=r)
        {
              int mid=(l+r)/2;
              if(nums[mid]==target){
                  j=mid;
                  l=mid+1;
              }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
            
        }
        
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
 
    
    

};