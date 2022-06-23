class Solution {
public:
    string greatestLetter(string s) {
        int count1[26]={0};
        int count2[26]={0};
        
        for(int i=0;i<s.length();i++)
        {
           if(s[i]>='a' and s[i]<='z')
           count1[s[i]-'a']++;
           else
           count2[s[i]-'A']++;
        }
        
        string ans="";
        for(int i=0;i<26;i++)
        {
            if(count1[i]>=1 and count2[i]>=1)
            ans=i+'A';
        }
        return ans;
    }
};