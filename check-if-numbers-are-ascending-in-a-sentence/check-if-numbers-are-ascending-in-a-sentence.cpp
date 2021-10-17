class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> a;
        int flag = 0;
        for(int i=0;i<s.size();i++)
        {
            int c = 0;
            while(isdigit(s[i]))
            {
                c = c*10 + (s[i]-'0');
                flag = 1;
                i++;
            }
            
            if(flag != 0) {
                a.push_back(c);
                flag = 0;
            }
        }
        
        if(a.size() == 1) return true;
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i] <= a[i-1]) return false;
        }
        return true;
    
    }
};