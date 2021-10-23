class Solution {
public:
    int thirdMax(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(n<=2)
            return nums[n-1];
        else
            return nums[2];
        }
        
     */
        sort(nums.begin(),nums.end(),greater());
vector<int>s;
s.push_back(nums[0]);
for(int i=1;i<nums.size();i++)
{
if(nums[i]!=nums[i-1])
s.push_back(nums[i]);
}

    if(s.size()<3)
        return s[0];
    else
        return s[2];

    }
};