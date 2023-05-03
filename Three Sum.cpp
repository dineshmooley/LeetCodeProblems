//1st Approach
//Time limit will be exceeded

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0;i<n-2;i++)  {
            for(int j=i+1;j<n-1;j++)    {
                for(int k=j+1;k<n;k++)  {
                    if(nums[i] + nums[j] + nums[k] == 0)    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        if(s1.find(temp) == s1.end())    {
                            ans.push_back(temp);
                            s1.insert(temp);
                        }
                    }            
                }
            }
        }
        return ans;
    }
};

//2nd Approach
//Time limit will be exceeded

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s1;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i=0; i<n-2; i++)    {
            int start = i + 1;
            int end = n - 1;
            while(start < end)  {
                if(nums[i] + nums[start] + nums[end] == 0)  {
                    vector<int> arr;
                    arr.push_back(nums[i]);
                    arr.push_back(nums[start]);
                    arr.push_back(nums[end]);
                    s1.insert(arr);
                    start++;
                    end--;
                }
            }
        }
        for(auto it:s1) {
            ans.push_back(it);
        }
        return ans;
    }
};

//3rd Approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s1;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i=0; i<n-2; i++)    {
            int start = i + 1;
            int end = n - 1;
            while(start < end)  {
                if(nums[i] + nums[start] + nums[end] == 0)  {
                    vector<int> arr;
                    arr.push_back(nums[i]);
                    arr.push_back(nums[start]);
                    arr.push_back(nums[end]);
                    s1.insert(arr);
                    // start++;
                    // end--;
                    int temp1 = nums[start];
                    int temp2 = nums[end];
                    while(temp1 == nums[start] && start<end)    {
                        start++;
                    }
                    while(temp2 == nums[end] && start<end)  {
                        end--;
                    }
                }
                else if(nums[i] + nums[start] + nums[end] > 0)  {
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        for(auto it:s1) {
            ans.push_back(it);
        }
        return ans;
    }
};
