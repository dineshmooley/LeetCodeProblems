//1st Approach
//Time Limit will be exceeded
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> s1;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)  {
            for(int j=i+1;j<n-2;j++)    {
                for(int k=j+1;k<n-1;k++)    {
                    for(int l=k+1;l<n;l++)  {
                        long long sum =(long long) nums[i] + nums[j] + nums[k] + nums[l];
                        if(sum == target)   {
                            vector<int> arr;
                            arr.push_back(nums[i]);
                            arr.push_back(nums[j]);
                            arr.push_back(nums[k]);
                            arr.push_back(nums[l]);
                            s1.insert(arr);    
                        }
                    }
                }
            }
        }
        for(auto it:s1) {
            ans.push_back(it);
        }
        return ans;
    }
};

//2nd Approach

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> s1;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++)  {
            for(int j=i+1;j<n-2;j++)    {
                int start = j+1;
                int end = n-1;

                while(start<end)    {
                    long long sum = (long long) nums[i] + nums[j] + nums[start] + nums[end];
                    if(sum == target)   {
                        vector<int> arr;
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[start]);
                        arr.push_back(nums[end]);
                        s1.insert(arr);
                        int temp1 = nums[start];
                        int temp2 = nums[end];
                        while(temp1 == nums[start] && start<end)    {
                            start++;
                        }
                        while(temp2 == nums[end] && start<end)  {
                            end--;
                        }
                    }
                    else if(sum < target)    {
                        start++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        for(auto it:s1) {
            ans.push_back(it);
        }
        return ans;
    }
};
