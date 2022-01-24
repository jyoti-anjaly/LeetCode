class Solution {
public:
    bool detectCapitalUse(string word) {
      int c=0,index;
       for(int i=0;i<word.length();i++)
       {
           if(word[i]>='A' && word[i]<='Z')
           {
               c++;
               index=i;
           }
       }
       if(c==word.length() || c==0 || (c==1 && index==0) )
           return true;
       return false; 
    }
};