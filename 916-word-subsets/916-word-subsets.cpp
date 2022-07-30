class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       vector<int>v(26);
        for(auto str:words2)
        {
            vector<int>v1(26);
            for(int i=0;i<str.size();i++)
            {
                v1[str[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(v1[i]>v[i])
                    v[i]=v1[i];
            }
        }
        vector<string>ans;
         for(auto str:words1)
        {
            vector<int>v1(26);
            for(int i=0;i<str.size();i++)
            {
                v1[str[i]-'a']++;
            }
            int flag=1;
            for(int i=0;i<26;i++){
                if(v1[i]<v[i])
                {
                    flag=0;
                    break;
                }
            }
             if(flag)
             {
                 ans.push_back(str);
             }
        }
        return ans;
    }
};