class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0;
        int high = s.size();
        vector<int>arr;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
            arr.push_back(low);
            low++;}
            else{
            arr.push_back(high);
            high--;}
        }
        arr.push_back(low);
        return arr;
        
    }
};