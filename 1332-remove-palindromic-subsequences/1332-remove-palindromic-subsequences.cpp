class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.size();
        int l=0;
        int h=n-1;
        //int count=0;
        if(s.size()==0)
            return 0;
        while(l<h)
        {
            if(s[l++]!=s[h--])
                return 2;
        }
        return 1;
    }
};