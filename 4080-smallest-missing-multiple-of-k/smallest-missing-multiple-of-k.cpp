class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k;
        int i=2;
        while(k>0)
        {
            if(find(nums.begin(),nums.end(),k)==nums.end())
            return k;
            
            int t= ans*i;
            k=t;
            i++;

        }
        return -1;
    }
};