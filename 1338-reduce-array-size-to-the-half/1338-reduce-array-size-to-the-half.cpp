class Solution {
public:
    int minSetSize(vector<int>& arr) {
         int n=arr.size();
        unordered_map<int,int>m;
        for(auto i:arr){
            m[i]++;
        }
        priority_queue<int>p;
        for(auto i:m){
            p.push(i.second);
        }
        int c=0,ans=0;
        while(!p.empty()){
            ans=ans+p.top();
            p.pop();
            c++;
            if(ans>=arr.size()/2)return c;
        }
        return 0;
    }
};