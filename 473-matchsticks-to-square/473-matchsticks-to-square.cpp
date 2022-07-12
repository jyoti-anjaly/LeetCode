class Solution {
public:
   bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size() < 4) return false;
        int perimeter = 0;
        for(int i=0; i<matchsticks.size(); i++)
            perimeter += matchsticks[i];
        if(perimeter %  4 != 0) return false;
        vector <int> sides(4, perimeter/4);
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        return func(matchsticks, 0, sides);
    }
    
    bool func(vector <int> &matchsticks, int i, vector <int> &sides)
    {
        if(i == matchsticks.size())
        {
            if(sides[0] == 0 && sides[1] == 0 && sides[2] == 0 && sides[3] == 0)               return true;
            else return false;
        }
        
        for(int j=0; j<4; j++)
        {
            if(matchsticks[i] > sides[j]) continue;
            sides[j] -= matchsticks[i];
            if(func(matchsticks, i+1, sides)) return true;
            sides[j] += matchsticks[i]; //bactracking is done here
        }
        return false;
    }
};