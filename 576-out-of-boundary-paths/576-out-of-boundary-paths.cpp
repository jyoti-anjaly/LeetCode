class Solution {
public:
    #define mod 1000000007
    int solveRec(int x,int y,int n,int m,int maxMove,vector<vector<vector<int>>>&dp){
        if(x<0 || y<0 || x>=n || y>=m) return 1;
        if(maxMove==0) return 0;
        int ans=0;
        if(dp[x][y][maxMove]!=-1) return dp[x][y][maxMove];
        int dx[]={1,-1,0,0};
        int dy[]={0,0,-1,1};
       
        for(int i=0;i<4;i++){
            int newX=x+dx[i];
            int newY=y+dy[i];
            ans=(ans+solveRec(newX,newY,n,m,maxMove-1,dp))%mod;
        }
   
        return dp[x][y][maxMove]= ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>vis(m,vector<vector<int>>(n,vector<int>(maxMove+1,-1)));
        return solveRec(startRow,startColumn,m,n,maxMove,vis);
    }
};