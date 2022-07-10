class Solution {
public:
    int fillCups(vector<int>& amount) {
        int time=0;
        sort(amount.begin(),amount.end());
        int n=amount.size()-1;
        while(amount[n-1]>0)
        {
            time++;
            amount[n]--;
            amount[n-1]--;
            sort(amount.begin(),amount.end());
        }
        time=time+amount[n];
        
        return time;
    }
};