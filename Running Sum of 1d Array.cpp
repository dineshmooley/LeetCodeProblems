//1st Approach
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;

        for(auto it: nums)  {
            sum = sum + it;
            ans.push_back(sum);
        }

        return ans;
    }
}; 
// Time Complexity: O(n)
//Space Complexity: O(n)

//2nd Approach
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)  {
            sum = sum + nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};
// Time Complexity: O(n)
//Space Complexity: O(1)
