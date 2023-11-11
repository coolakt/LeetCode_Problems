class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1, k = 1, len = nums.size();
        for (auto i = 1; i < len; i++) {
            if (nums[i] == nums[i - 1]) {
                k++;
                if (k <= 2) {
                    nums[j] = nums[i];
                    j++;
                }
            } else {
                nums[j] = nums[i];
                j++;
                k = 1;
            }
        }
        return j;
    }
};
