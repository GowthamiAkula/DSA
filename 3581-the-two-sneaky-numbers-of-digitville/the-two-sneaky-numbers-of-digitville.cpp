class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int>seen;
        vector<int>duplicates;
        for(int i : nums)
        {
            if(seen.count(i))
            {
                duplicates.push_back(i);
            }
            else
            {
                seen.insert(i);
            }
        }
        return duplicates;
    }
};