class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums2.insert(nums2.end(), nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums2.size();
        if(n%2 == 0)    {
            return (double)(nums2[(n-1)/2] + nums2[n/2])/2;
        }
        else{
            return nums2[n/2];
        }
    }
    
};
