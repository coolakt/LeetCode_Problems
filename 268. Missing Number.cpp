// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expectedSum = n*(n+1)/2;
//         int sum=0;

//         for(int i=0; i<n; i++)
//             sum += nums[i];
        
//         return expectedSum - sum;

//     }
// };
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            ans^=(nums[i]^i);
        }
        ans^=(n);
        return ans;
    }
};
