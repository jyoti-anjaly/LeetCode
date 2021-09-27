class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      /*  int n=arr.size();
        int l=0;
        int r=n-1;
        int mid=l+(r-1)/2;
        while(l<r)
        {
            if(mid==i)
                return i;
        }
        */
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]<arr[i-1])
            {
                return i-1;
            }
        }
        return 0;
    }
};