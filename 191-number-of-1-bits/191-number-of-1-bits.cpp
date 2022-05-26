class Solution {
public:
    int hammingWeight(uint32_t n) {
       int count=0,ans;
        while(n>0){
            ans= n&1;
            if(ans>0){
                count++;
            }
            n=n>>1;
            
        }
        return count;
    }
};