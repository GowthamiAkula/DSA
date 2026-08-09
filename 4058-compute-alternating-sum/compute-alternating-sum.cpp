class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int flag = 1;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += flag * nums[i];
            flag = flag * -1;
        }

        return sum;
    }
};