class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int ans=0, s=0, n=cardPoints.size()-1;
        --k;
        for(int i=0; i<=k; ++i)
            s+=cardPoints[i];
        ans = s;
        for(int i=0; i<=k; ++i){
            s-=cardPoints[k-i];
            s+=cardPoints[n-i];
            ans = max(ans, s);
        }
        return ans;
    }
};