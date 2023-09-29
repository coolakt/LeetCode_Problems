class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                decreasing = false; //making its not decreasing rather its increasing
            } else if(nums[i] < nums[i-1]) {
                increasing = false; 
            }
        }
        
        return increasing || decreasing; 
    }
};
