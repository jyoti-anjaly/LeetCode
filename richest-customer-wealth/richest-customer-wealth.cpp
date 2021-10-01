class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN,sum=0,i,j;
        for(i=0;i<accounts.size();i++){
            for(j=0;j<accounts[i].size();j++)
                sum+=accounts[i][j];
            if(sum>max)
                max=sum;
            sum=0;
        }
        return max;
    }
};