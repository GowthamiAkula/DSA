class Solution {
public:
    string reverseByType(string s) {
        int l = 0, h = s.size() - 1;
        while (l < h) {
            if (!isalpha(s[l])) { l++; continue; }
            if (!isalpha(s[h])) { h--; continue; }
            swap(s[l], s[h]);
            l++;
            h--;
        }
        l = 0;
        h = s.size() - 1;
        while (l < h) {
            if (isalpha(s[l])) { l++; continue; }
            if (isalpha(s[h])) { h--; continue; }
            swap(s[l], s[h]);
            l++;
            h--;
        }
        
        return s;
    }
};