class Solution {
public:
    vector<int> constructRectangle(int area) {
        if (area <= 0) return vector<int> {};
        vector<int> res;
        int w = area;
        for (int i = 1; i * i <= area; ++i) {
            if (area % i == 0) w = i;
        }
        return vector<int> {area / w, w};
    }
};