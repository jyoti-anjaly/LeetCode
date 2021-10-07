class Solution {
public:
    bool isPalindrome(string s) {
       string tmp = "";
    
  for(int i = 0;i<s.length();i++){
      if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))  
        tmp += s[i];
  }
  transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
  
  string str = tmp;
  
    reverse(str.begin(),str.end());
    
    
   if(str == tmp)
       return true;
    return false; 
    }
};