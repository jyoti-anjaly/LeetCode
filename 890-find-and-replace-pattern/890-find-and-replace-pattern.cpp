class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        if(pattern.length() == 1){
            return words;
        }
        vector<string> res;
        for(int i = 0; i < words.size(); i++){
            string temp = words[i];
            map<char, char> c;
            map<char, char> abc;
            for(int j = 0; j <temp.length(); j++){
                if(c.find(temp[j]) == c.end()){
                    if(abc.find(pattern[j]) != abc.end())
                        break;
                    c[temp[j]] = pattern[j];
                    abc[pattern[j]] =  c[temp[j]];
                }
                temp[j] = c[temp[j]];
            }
            if(temp == pattern)
                res.push_back(words[i]);
        }
        return res;
    }
};