class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while(target>startValue)
        {
          if(target%2!=0)
          {
              target+=1;
          }
            else
            {
              target=target/2;
                
            }
            count+=1;
        }
        if(target!=startValue)
        {
            count+=startValue-target;
        }
        return count;
    }
    
};