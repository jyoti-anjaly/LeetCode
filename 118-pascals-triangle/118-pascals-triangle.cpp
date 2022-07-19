class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        ans.push_back(vector<int>(1,1));
        
        for(int i=1; i<numRows; i++){
            vector<int> row;
            row.push_back(1);
            for(int j=0;j<i-1;j++){
                row.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        
        return ans;
    }
};