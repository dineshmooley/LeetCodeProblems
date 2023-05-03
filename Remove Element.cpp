class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n ; i++)  {
           if   ( nums[i] != val )  {
               swap(nums[i], nums[res]);
               res++;
           }
           else {
               count++;
           }
            
        }

        return n - count;
    }
};
