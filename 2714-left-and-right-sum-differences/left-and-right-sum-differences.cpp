class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int ls=0;
        int rs=0;
        for(int i=0;i<nums.size();i++)
        {
            rs += nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            int temp = nums[i];
            rs = rs-temp;
            nums[i] = abs(ls-rs);
            ls += temp;
        }
        return nums;
    }
};