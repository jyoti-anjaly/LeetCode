class Solution {
public:
    int minPartitions(string n) {
       int maxCount = 0;
        for(int i=0;i<n.length();i++){
            if(n[i]-'0' > maxCount) maxCount = n[i]-'0';
        }
        
        return maxCount;   
    }
};