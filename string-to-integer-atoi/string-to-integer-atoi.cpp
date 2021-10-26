class Solution {
public:
    int myAtoi(string s) {
        //int n=atoi(s);
        //return n;
        int r = 0;
        stringstream ss;
        ss << s;
        ss >> r;
        return r;
        
    }
};