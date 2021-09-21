class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        /*sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=arr[i+1])
                return i+1;
        }
        */
         vector<int> t(arr);
        sort(t.begin(), t.end());
        
        unordered_map<int, int> map;
        for(int i = 0, rank = 1; i < t.size(); i++) {
            if(i == 0 || t[i] != t[i-1]) {
                map[t[i]] = rank++;
            }
        }
        
        vector<int> res;
        for(int i = 0; i < arr.size(); i++) res.push_back(map[arr[i]]);
        return res;
    }
};