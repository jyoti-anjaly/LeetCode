class Solution {
public:
    string frequencySort(string s) {
       // reverse(s.begin(),s.end());
        
       // return s;
        string res;
        unordered_map<char,int> mp;
        multimap<int,char,greater<int>> mmp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            mmp.insert({x.second,x.first});
        }
        for(auto x:mmp)
        {
            int temp=x.first;
            while(temp--)
            {
                res.push_back(x.second);
            }
        }
        return res;
    }
};