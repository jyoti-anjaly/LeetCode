class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return 0;
        int count=0; 
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]==arr[i] || arr[i]==arr[i+1])return 0; 
            if(arr[i-1]>arr[i] && arr[i]<arr[i+1])return 0; 
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])count++;
        }
        return count==1;
        
    }
};