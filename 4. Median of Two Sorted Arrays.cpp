class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n=nums2.size();
        
        for(int i=0; i<n; i++)            
                nums1.push_back(nums2[i]);

        sort(nums1.begin(), nums1.end());
         int m=nums1.size();

        double ans=0;

        if(m%2==0){
            ans = ( nums1[m/2-1] + nums1[m/2] ) / 2.0;
        }
        else ans=(nums1[m/2]);

        return ans;
        
    }
};
