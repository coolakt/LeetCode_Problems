class Solution {
public:
    void solve(vector<int>& nums, int target, int fixed_num, int&ans,int i, int j){
        while(i<j){
            int sum = nums[i]+nums[j]+fixed_num;

            if(abs(sum-target)<abs(ans-target)) ans= sum;

            if(sum<target)i++;

            else j--;
        }
    }
    int threeSumClosest(vector<int>& nums, int target) {

        sort(begin(nums),end(nums));

        int ans = 1e5;

        for(int i=0; i<=nums.size()-3; i++){
            solve(nums,target,nums[i],ans,i+1,nums.size()-1);
        }

        return ans;
    }
};
