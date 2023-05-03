//1st Approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ind;
        for(int i=0;i<n-1;i++)  {
            for(int j=i+1;j<n;j++)  {
                if(nums[i] + nums[j] == target) {
                    
                    ind.push_back(i);
                    ind.push_back(j);
                }
            }
        }
        return ind;
    }
};


//2nd Approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = nums.size();
        for (int i=0;i<n;i++)   {
            if(mp.find(target - nums[i]) != mp.end()) {
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;   
    }
};
