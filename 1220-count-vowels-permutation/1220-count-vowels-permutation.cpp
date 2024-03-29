class Solution {
public:
    int countVowelPermutation(int n) {
       long long mod = 1e9+7;
        vector<long long>arr1(5,1);
        for(int i=2;i<=n;i++){
            vector<long long>arr2(5,0);
            
            arr2[0] = (arr1[1]+arr1[2]+arr1[4])%mod;
            arr2[1] = (arr1[0]+arr1[2])%mod;
            arr2[2] = (arr1[1]+arr1[3])%mod;
            arr2[3] = arr1[2]%mod;
            arr2[4] = (arr1[2]+arr1[3])%mod;
            
            arr1 = arr2;
        }
        long long c = 0;
        for(int i=0;i<5;i++)
        {
            c+=(arr1[i])%mod;    
        }
        return c%mod; 
    }
};