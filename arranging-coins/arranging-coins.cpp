class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int count =0 ;
        
        while(n> 0){
            
                n-=low;
            low++;
            
            
            if(n>=0){
                count++;
                
            }else{
                break;
            }
            
            
        }
        
        return count;
    }
    
};