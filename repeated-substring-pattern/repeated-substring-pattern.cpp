class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n=s.length();
        for(int i=1;i<n;i++)
        {
            if(i>(n/2)) break;
            if(n%i) continue;
            int j;
            string str = s.substr(0,i);
            
            for(j=i;j<n;j+=i)
            {
                string temp=s.substr(j,i);
                if(temp!=str) break;
            }
            if(j==n) return true;
        }
        return false;
    }
};