class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int i=digits.size()-1;
           while(i>=0){
             
                if(digits[i]==9){
                  digits[i]=0;
                    if(i==0){                        
                    digits.insert(digits.begin(),1);
                     return digits;
                    }
                   else{
                    i--;
                  }

                 }
                else{
                   digits[i]+=1;
                  return digits; 
                  }


          }
              return digits;
      }
    
};