class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        for(long int i=0;i<=x;i++){
            if(i*i==x){
                return i;
            }
            else if(i*i>x){
                return i-1;
            }
        }
        return -1;
    }
};