// This one here is an easy question, please solve on your own.








































class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto it: operations)    {
            if(it == "--X" || it == "X--")  {
                x = x - 1;
            }
            else    {
                x = x + 1;
            }
        }

        return x;
    }
};
