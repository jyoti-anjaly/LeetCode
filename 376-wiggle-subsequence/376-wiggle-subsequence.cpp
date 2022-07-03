class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        vector <int> s;
        int max = 1;
        int last = 0;
        
        for(int i = 0; i < nums.size()-1; i++)
            s.push_back(nums[i+1] - nums[i]);
        
        for(int i = 0; i < s.size(); i++){
            int current = s[i];
            
            if((current < 0 && last >= 0) || (current > 0 && last <= 0)){
                max++;
                last = current;
            }
        }
        
        return max;
    }
};