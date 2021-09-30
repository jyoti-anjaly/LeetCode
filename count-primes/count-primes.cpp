class Solution {
public:
    int countPrimes(int n) {
      /*  int count=0;
                
       for(int i=2;i*i<n;i++)
       {
           if(i%1==0 && i%i==0)
              count++; 
       }

        return count;
        */
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=n;i++)
        {
           if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
           }
                
        }
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true)
                count++;
        }
        return count;
        

    }
};