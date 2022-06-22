class Solution {
public:
    void wiggleSort(vector<int>& nums) {
       vector<int> temp=nums; int n=nums.size();
        sort(temp.begin(), temp.end());
        int j=n-1;
        for(int i=1;i<n;i=i+2)
        {
            nums[i]=temp[j--];
        }
        for(int i=0;i<n;i=i+2)
        {
            nums[i]=temp[j--];
        }
        
    }
};