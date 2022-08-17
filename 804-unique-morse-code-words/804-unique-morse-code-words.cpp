class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(int i=0;i<words.size();i++){
            string temp="";
            for(int j=0;j<words[i].size();j++){
                temp+=morse[words[i][j]-'a'];
            }
            s.insert(temp);
        }
        return s.size();
        

    }
};