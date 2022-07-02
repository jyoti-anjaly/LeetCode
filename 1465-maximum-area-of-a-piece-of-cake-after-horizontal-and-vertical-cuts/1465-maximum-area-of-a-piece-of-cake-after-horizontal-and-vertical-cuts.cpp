class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int hmax=0,vmax=0,k=0,l=0;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        for(int i=0;i<horizontalCuts.size();i++)
        {
            hmax=max(hmax,horizontalCuts[i]-k);
            k=horizontalCuts[i];
        }
        hmax=max(hmax,h-k);
        
        for(int i=0;i<verticalCuts.size();i++)
        {
            vmax=max(vmax,verticalCuts[i]-l);
            l=verticalCuts[i];
        }
        vmax=max(vmax,w-l);
        
        return (long)vmax*hmax%1000000007; 
        
    }
};