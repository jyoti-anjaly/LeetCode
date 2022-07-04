class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> v(26);
        char a = 'a';
        for(auto i : key){   
            if(i != ' ' && !v[i-'a'])
                v[i-'a'] = a++;
        }
        for(int i=0; i < message.size(); i++){  
            if(message[i] != ' ')
                message[i] = v[message[i]-'a'];  
        }
        return message;
    }
};