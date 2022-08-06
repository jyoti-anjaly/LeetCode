class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets == 1) {
            return 0;
        }
        
        int Tests = minutesToTest / minutesToDie;
        
        for(int i = 1; i <= buckets; ++i) {
            int ans = pow(Tests + 1, i);
            
            if(ans >= buckets) {
                return i;
            }
        }
        
        return -1;
    }
};