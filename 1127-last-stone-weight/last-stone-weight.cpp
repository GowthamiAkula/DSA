class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>weight(stones.begin(),stones.end());
        while(weight.size()>1)
        {
            int y = weight.top();
            weight.pop();
            int x = weight.top();
            weight.pop();
            if(y!=x)
            weight.push(y-x);
        }
        return weight.empty() ? 0 : weight.top();
    }
};