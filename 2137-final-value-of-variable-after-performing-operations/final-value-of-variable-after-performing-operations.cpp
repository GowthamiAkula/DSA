class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int s=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X" || operations[i]=="X--")
            s =s- 1;
            else
            s =s+ 1;
        }
        return s;
    }
};