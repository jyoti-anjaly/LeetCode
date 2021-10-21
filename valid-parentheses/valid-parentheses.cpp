class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)return true;
        stack<char> st;
        for(char &ch:s)
        {
            if(ch=='(' || ch=='{' || ch=='[')st.push(ch);
            else
            {
                if(st.empty())return false;
                if(st.top()=='[' &&ch==']')st.pop();
                else if(st.top()=='{' &&ch=='}')st.pop();
                else if(st.top()=='(' &&ch==')')st.pop();
                else return false;
            }
        }
        if(!st.empty())return false;
        return true;
    }
};