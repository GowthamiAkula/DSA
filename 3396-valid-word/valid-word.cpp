class Solution {
public:
    bool isValid(string word) {
        int a = 0, b = 0, c = 0;
        if(word.size()<3) return false;
        for (int i = 0; i < word.size(); i++) {
            if (isalpha(word[i])) {
                if (word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or
                    word[i] == 'o' or word[i] == 'u' or word[i] == 'A' or
                    word[i] == 'E' or word[i] == 'I' or word[i] == 'O' or
                    word[i] == 'U') {
                    c++;
                } else {
                    a++;
                }
            } else if (isdigit(word[i])) {
                continue;
            } else {
                return false;
            }
        }
        if ( c >= 1 and a >= 1) {
            return true;
        }
        return false;
    }
};