class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int j=0;
        int i=0;
        for(i=0;i<word1.size() && j<word2.size();i++)
        {
            ans+=word1[i];
            ans+= word2[j];
            j++;
        }
        if(i<word1.size())
        {
            while(i<word1.size())
            {
            ans += word1[i];
            i++;
            }
        }
        if(j<word2.size())
        {
            while(j<word2.size())
            {
            ans += word2[j];
            j++;
            }
        }
        return ans;
    }
};