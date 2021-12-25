class Solution {
public:
    int check(string s)
    {
        int c = 0;
        for(int i= 0 ; i < s.length() ; i++)
        {
            if(s[i] == ' ')
                c++;
        }
        
        return c+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i = 0 ; i < sentences.size() ; i++)
        {
            ans = max(ans,check(sentences[i])); 
        }
        
        return ans;
    }
};