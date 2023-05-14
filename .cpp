//1st Approach

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto it: nums)  { 
            s.insert(it);
        }
        int i=0;
        for(auto it: s)    {
            nums[i] = it;
            i++;
        }

        return s.size();
    }
};

//Time Complexity: O(N * logN)
//Space Complexity: O(N)

//2nd Approach
//Using Two Pointers approach

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int n = nums.size();
        while(i<n && j<n)   {
            if(nums[i] == nums[j])  {
                j++;
            }

            else if(nums[i]!=nums[j])    {
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }   
};

//Time Complexity: O(N)
//Space Complexity: O(1)
