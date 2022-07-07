class Solution {
public:
   vector<vector<int>> dp;
    bool solve(string s1, string s2, string s3,int i,int j,int k,int n1,int n2,int n3){
        if(i>n1&&j>n2&&k>n3)
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s3[k]&&s2[j]==s3[k]){
            return dp[i][j]=solve(s1,s2,s3,i+1,j,k+1,n1,n2,n3)||solve(s1,s2,s3,i,j+1,k+1,n1,n2,n3);
        }
        else if(s1[i]==s3[k]){
            return dp[i][j]=solve(s1,s2,s3,i+1,j,k+1,n1,n2,n3);
        }
        else if(s2[j]==s3[k]){
            return dp[i][j]=solve(s1,s2,s3,i,j+1,k+1,n1,n2,n3);
        }
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.length(),n2=s2.length(),n3=s3.length();
        dp.resize(101,vector<int>(101,-1));
        if((n1+n2)!=n3)
            return false;
        return solve(s1,s2,s3,0,0,0,n1-1,n2-1,n3);
        
    }
};