class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_x = m, min_y = n;
        for (vector<int> &q : ops) {
            min_x = min(min_x, q[0]);
            min_y = min(min_y, q[1]);
        }

        return min_x * min_y;
    }
};