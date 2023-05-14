class Solution {
public:

    vector<int> rightSum(vector<int> &nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i=0;i<n-1;i++)    {
            int sum = 0;
            for(int j=i+1;j<n;j++)  {
                sum = sum + nums[j];
            }

            arr.push_back(sum);
        }
        arr.push_back(0);

        return arr;
    }

    vector<int> leftSum(vector<int> &nums)  {
        int n = nums.size();
        vector<int> arr;
        arr.push_back(0);
        for(int i=1;i<n;i++)    {
            int sum = 0;
            for(int j=0;j<i;j++)    {
                sum = sum + nums[j];
            }

            arr.push_back(sum);
        }

        return arr;
    }

    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> ans1 = rightSum(nums);
        vector<int> ans2 = leftSum(nums);

        int n = nums.size();
        for(int i=0;i<n;i++)    {
            int ans = ans1[i] - ans2[i];
            if(ans < 0) {
                ans1[i] = -ans;
            }
            else{
                ans1[i] = ans;
            }
        }

        return ans1;

    }


};
