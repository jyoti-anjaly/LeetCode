class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        int countA=0;
        int countB=0;
        if(n==2 || n==1)
            return false;
        for(int i=1;i<n;i++)
        {
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A')
            countA++;
            
            if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B')
            countB++;
        }
        if(countA>countB)
            return true;
        
        return false;
    }
};