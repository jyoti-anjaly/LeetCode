class Solution {
public:
    string addBinary(string a, string b) {
        string res= "";
        int sum=0;
        int i=a.length()-1,j=b.length()-1;
        while(i>=0 || j>=0 || sum!=0){
            if(i>=0)
            {
                sum+=a[i]-'0';
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
            }
            res.push_back(char(sum%2+'0'));
            sum/=2;
            i--;
            j--;
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};