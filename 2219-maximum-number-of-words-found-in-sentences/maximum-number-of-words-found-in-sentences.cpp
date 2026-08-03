class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = 0;
        for(int i=0;i<sentences.size();i++)
        {
        int cnt=1;
        {
            for(char ch:sentences[i])
            {
                if(ch==' ')
                cnt+=1;
            }
            maxi = max(maxi,cnt);
        }
        }
        return maxi;
    }
};