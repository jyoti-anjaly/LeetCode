class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,n=s.length()-1;
int c=0;
reverse(s.begin(),s.end());

    for(i=0;i<=n;i++)  
    {
       
        if(s[i]!=' ')
        {
            c++;
        if(s[i+1]==' ')
            break;
        
        }
        
    }
  return c;  

    }
};