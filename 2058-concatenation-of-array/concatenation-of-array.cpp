class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>anss;
        for(int i=0;i<nums.size();i++)
        {
            anss.push_back(nums[i]);
        }
        for(int j=0;j<nums.size();j++)
        {
            anss.push_back(nums[j]);
        }
        return anss;
    }
};