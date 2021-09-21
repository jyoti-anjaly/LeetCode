class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        if(num == 2 || num == 3) return false;
        long long int n = 2;
        long long int product = n*n;
        while(product < num) {
            n++;
            product=n*n;
        }
        if(product == num) {
            return true;
        }
        return false;
    }
};