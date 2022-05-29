class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int count=0;
        while(true)
        { int flag=0;
        for(int i=0;i<target.size();i++)
        {
            if(mp[target[i]]==0)
            {
                flag=1;
                break;
            }
            mp[target[i]]--;
        }
         if(flag)
                break;
            count++;
            
        }
        return count;
    }
};