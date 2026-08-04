class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            if(s.length()%2 != 0)
            continue;
            int first_sum = 0;
            int second_sum = 0;
            int n=s.length();
            for(int i=0;i<n/2;i++)
            {
                first_sum += s[i]-'0';
            }
            for(int i=n/2;i<n;i++)
            {
                second_sum += s[i]-'0';
            }
            if(first_sum==second_sum)
            cnt++;
        }
        return cnt;
    }
};