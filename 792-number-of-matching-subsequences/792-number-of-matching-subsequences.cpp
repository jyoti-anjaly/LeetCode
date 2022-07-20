class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        int n = words.size();
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        for(auto& it:mp){
            int idx = 0;
            int wordLength = it.first.length();
            
            for(int j = 0; j < s.length() && idx < wordLength; j++){
                if(s[j] ==it.first[idx]){
                    idx++;
                }
            }
            if(idx == wordLength){
                count+=it.second;
            }
        }
        return count;
    }
};