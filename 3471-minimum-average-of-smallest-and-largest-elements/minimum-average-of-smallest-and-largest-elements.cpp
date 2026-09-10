class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            double avg = (nums[l]+nums[h])/2.0;
            averages.push_back(avg);
            l++;
            h--;
        }
        double ans = *min_element(averages.begin(),averages.end());
        return ans;
    }
};