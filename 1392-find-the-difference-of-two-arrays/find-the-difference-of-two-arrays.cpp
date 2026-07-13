class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set s1(nums1.begin(),nums1.end());
        unordered_set s2(nums2.begin(),nums2.end());
        vector<int>a,b;
        for(int x:s1)
        {
            if(s2.count(x)==0)
            a.push_back(x);
        }
        for(int y:s2)
        {
            if(s1.count(y)==0)
            b.push_back(y);
        }
        return {a,b};
    }
};