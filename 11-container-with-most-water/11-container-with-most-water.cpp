class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
       int i = 0, j = n-1;
       int mxArea = 0;
        while(i < j)
        {
            if(height[i] <= height[j]){
                mxArea = max(mxArea, (j-i)*height[i]);
                i++;
            }
            else{
                mxArea = max(mxArea, (j-i)*height[j]);
                j--;
            }
        }
        return mxArea;
    }
};