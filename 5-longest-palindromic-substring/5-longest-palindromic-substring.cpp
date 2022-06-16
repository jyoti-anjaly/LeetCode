class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0 || s.size() == 1)
		return s;
	int start = 0, maxlen = 1;
    for(int i=0; i<s.size(); i++){
        int j=i, k=i;
        while(k<s.size()-1 && s[k] == s[k+1])
            k++;
        while(j>0 && k<s.size()-1 && s[j-1] == s[k+1]){
            k++;
            j--;
        }
        if(k-j+1 > maxlen){
            maxlen = k-j+1;
            start = j;
        }
    }
    return s.substr(start, maxlen);
    }
};