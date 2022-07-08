class Solution {
private:
    long long int arr[101][21][101];
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
         if(target>m)
             return -1;
        else
        {  
        
          long long int ans= fun(houses,cost,m,n,target,0,0,0);
            return ans==INT_MAX?-1:ans;
        }
       
        
    }
    long long int fun(vector<int>&houses,vector<vector<int>>&cost,int &m,int &n,int &target,int id,int prev,int num)
         {
             if(id==m)
             {
                 return num==target?0:INT_MAX;
             }
             else
             { int new_num=num;
              long long int ans=INT_MAX;
              if(arr[id][prev][num]!=0)
                  return arr[id][prev][num];
                 if(houses[id]!=0)
                 {
                     if(prev!=houses[id])
                         new_num+=1;
                     
               ans= fun(houses,cost,m,n,target,id+1,houses[id],new_num);
                         
                 }
              else
              {
                  
                  for(int j=0;j<n;j++)
                  {new_num=num;
                      if(j+1!=prev)
                         new_num=num+1;
                         
                             
                             ans=min(ans,fun(houses,cost,m,n,target,id+1,j+1,new_num)+cost[id][j]);
                  }
                  
              }
                  return arr[id][prev][num]=ans;   
             }   
    }
};