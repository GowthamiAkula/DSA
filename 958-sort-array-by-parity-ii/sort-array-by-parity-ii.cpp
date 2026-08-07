class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(int i=0;i<nums.size();i+=2)
        {
            for(int j=1;j<nums.size();j+=2)
            {
                if(nums[i]%2!=0 && nums[j]%2==0)
                {
                    swap(nums[j],nums[i]);
                }
            }
        }
        return nums;

        
    }
};