class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int mn = INT_MAX;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mn)
            {
                ans.push_back({arr[i-1],arr[i]});
            }
            else if(arr[i]-arr[i-1]<mn){
                ans = {{arr[i-1],arr[i]}};
                mn = arr[i]-arr[i-1];
            }
        }
        

        return ans;
    }
};