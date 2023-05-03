class Solution {
public:

    vector<int> numsToAns(vector<int>& nums, vector<int>& ans)    {
        for(auto it: nums)  {
            ans.push_back(it);
        }

        return ans;
    }

    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        numsToAns(nums, ans);
        numsToAns(nums, ans);

        return ans;
    }
};
