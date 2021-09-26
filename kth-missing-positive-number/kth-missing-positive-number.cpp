class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1,i=0;
        while(k!=0 && i<arr.size()){
            if(num != arr[i])
                k--;
            if(k==0)
                return num;
            if(num==arr[i])
                i++;
            num++;
        }
        return num+(k-1);
        
    }
};