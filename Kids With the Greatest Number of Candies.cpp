class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        vector<bool> ans;
        for(auto it: candies)   {
            if(it > max)    {
                max = it;
            }
        }

        for(auto it: candies)   {
            if(it + extraCandies >= max)    {
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }   
};
