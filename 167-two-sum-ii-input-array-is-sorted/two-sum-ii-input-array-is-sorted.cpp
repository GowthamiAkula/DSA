class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        for(int i=left;i<numbers.size();i++)
        {
            int sum = numbers[left]+numbers[right];
            if(sum==target)
            return {left+1,right+1};
            else if(sum<target)
            left++;
            else
            right--;
           
        }
        return {};
    }
};