class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int> &a,vector<int>&b){
            return a[1]>b[1];
        });
        int count=0;
        for(int i=0;i<boxTypes.size() && truckSize>0;i++){
            if(boxTypes[i][0] <= truckSize){
                count+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else{
                count+=(truckSize * boxTypes[i][1]);
                truckSize=0;
            }
        }
        return count;
    }
};