class Solution {
public:
     bool static cmp(vector<int> &p, vector<int> &q) {
        if(p[0]==q[0])
            return p[1]<q[1];
        return p[0]>q[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>> queue;
        sort(people.begin(), people.end(), cmp);
        for(int i=0;i<n;i++) {
            queue.push_back(people[i]);
            int j=queue.size()-1;
            while(queue.size()-1-j!=people[i][1])
                swap(queue[j], queue[j-1]), j--;
        }
        reverse(queue.begin(), queue.end());
        return queue;
    }
};