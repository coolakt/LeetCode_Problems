class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long mod = 1000000007;
        unordered_map<int,long long> mp;
        for(int i=0; i<n; i++){
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            int rev = stoi(s);
            mp[nums[i]-rev]++;
        }
        long long ans=0;
        for(auto it: mp){
            ans=(ans+(it.second)*(it.second-1)/2)%mod;
        }
        return ans;
    }
};
