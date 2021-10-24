class Solution {
public:
    int singleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
int n = nums.size();
int count;
for(int i=0;i<n-1;i+=3)
{
int flag=0;
int tlag=0;
if(nums[i]==nums[i+1])
flag=1;
if(nums[i+1]==nums[i+2])
tlag=1;
if(flag!=tlag)
{
if(flag==0)
return nums[i];
if(tlag==0)
return nums[i+2];
}
else
continue;

    }
    return nums[n-1];
    }
};