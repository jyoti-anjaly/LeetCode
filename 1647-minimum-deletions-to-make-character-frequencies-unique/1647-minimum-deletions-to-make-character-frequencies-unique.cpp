class Solution {
public:
    int minDeletions(string s) {
        vector<int> a(26, 0);
        for(auto x: s) {
            a[x - 97]++;
        }
        sort(a.begin(), a.end(), greater<int>());
        int i, ans = 0, t = -1; 
        while(t != 0) {
            t = 0;
            i = 0;
            while(a[i] != 0 && i < 25) {
                    if(a[i] == a[i+1]){
                        a[i]--;
                        t++;
                    }
                i++;
            }
            ans += t;
            sort(a.begin(), a.end(), greater<int>());
        }
        return ans;
    }
};