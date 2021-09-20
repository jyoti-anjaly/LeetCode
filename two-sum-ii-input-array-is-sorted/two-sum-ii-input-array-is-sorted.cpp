class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*for(int i=1;i<=numbers.size;i++)
        {
          for(int j=i+1;j<=numbers.size;j++)
          {
                  if(numbers[i]+numbers[j]==target)
                      return i,j;
          }
        }
        */
        int low = 0, high = numbers.size()-1;
        while(low < high){
            int sum = numbers[low] + numbers[high];
            if(sum == target) return {low+1, high+1};
            else if(sum > target) high--;
            else low++;
        }
        return {-1,-1};
    }
};