class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                matrix[i][j]=matrix[i][j]+matrix[i][j-1];
            }
        }
        int res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                mp={{0,1}};
                int cur=0;
                for(int k=0;k<n;k++){
                    cur+=matrix[k][j]-(i>0?matrix[k][i-1]:0);
                    res+=mp.find(cur-target)!=mp.end()?mp[cur-target]:0;
                    mp[cur]++;
                }
            }
        }
        return res;
    }
};