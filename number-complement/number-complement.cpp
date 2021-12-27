class Solution {
public:
      int findComplement(int num) {
         int ans = 0, temp = 0, count = 0;
        while(num){
            temp = !(num & 1);
            num >>= 1;
            ans |= (temp << count++);
        }
        return ans;
    }
};