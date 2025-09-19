class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_occ = -1, second_occ = -1;
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int m = l + (h-l)/2;
            if(nums[m]==target)
            {
            first_occ = m;
            h=m-1;
            }
            else if(target>nums[m])
            {
                l = m+1;
            }
            else
            {
                h = m-1;
            }
        }
        l=0,h=nums.size()-1;
        while(l<=h)
        {
            int m = l + (h-l)/2;
            if(nums[m]==target)
            {
            second_occ = m;
            l=m+1;
            }
            else if(target>nums[m])
            {
                l = m+1;
            }
            else
            {
                h = m-1;
            }
        }
        return {first_occ,second_occ};
    }
};