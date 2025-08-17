class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int w_sum = 0;
        for(int i=0;i<k;i++)
        {
            w_sum += nums[i];
        }
        int max_sum = w_sum;
        for(int j=k;j<nums.size();j++)
        {
            w_sum = w_sum - nums[j-k]+nums[j];
            if(w_sum > max_sum)
            {
                max_sum = w_sum;
            }
        }
        return double(max_sum)/k;
    }
};