class Solution {
public:
    int climbStairs(int n) {
         if(n==1)return 1;
        int a=1,b=1,ans;
        for(int i=1;i<n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};