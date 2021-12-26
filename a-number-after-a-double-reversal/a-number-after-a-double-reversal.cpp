class Solution {
public:
    bool isSameAfterReversals(int num) {
        string num1=to_string(num);
        if(num1=="0"){
            return true;
        }
        if(num1[num1.length()-1]=='0'){
            return false;
        }
        return true;
    }
};