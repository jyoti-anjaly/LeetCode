class Solution {
public:
    int count;
    bool unsafe(vector<string> &temp, int x, int y, int n) {
        for(int i=0;i<n;i++) {
            if(temp[i][y]=='Q')
                return true;
            if(x-i>=0 && y-i>=0 && temp[x-i][y-i]=='Q')
                return true;
            if(x-i>=0 && y+i<n && temp[x-i][y+i]=='Q')
                return true;
        }
        return false;
    }
    
    void placeQueen(int n, int index, vector<string> &temp) {
        if(index==n) {
            count++;
            return;
        }
        for(int i=0;i<n;i++) {
            if(!unsafe(temp, index, i, n)) {
                temp[index][i] = 'Q';
                placeQueen(n, index+1, temp);
                temp[index][i] = '.';
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<string> temp(n, string(n, '.'));
        placeQueen(n, 0, temp);
        return count;
    }
};