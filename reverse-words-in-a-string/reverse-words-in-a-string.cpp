class Solution {
public:
    string reverseWords(string s) {
       // reverse(s.begin(),s.end());
        
       // return s;
        string str="";
        vector<string>v;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        int i;
        for(i=0;i<v.size()-1;i++){
            str+=v[i]+" ";
        }
        str+=v[i];
        return str;
    }
};