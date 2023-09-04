class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int d=0;

        for(int i=nums.size()-1; i>0; i--){
                d+=nums[i]-nums[0];
        }
        return d;
        
    }
};
