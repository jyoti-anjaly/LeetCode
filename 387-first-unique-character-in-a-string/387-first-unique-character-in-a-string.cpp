class Solution {
public:
    int firstUniqChar(string s) {
       // bool flag=true;
        for(int i=0;i<s.size();i++)
        {
             bool flag=true;
           for(int j=0;j<s.size();j++)
           {
               if(i!=j && s[i]==s[j])
               {
                   flag=false;
                break;
               }
           }
            if(flag==true)
                return i;
        }
        return -1;
    }
};
