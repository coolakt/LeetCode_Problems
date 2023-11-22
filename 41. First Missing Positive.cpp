class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int j=1;
        for(int i:s)
        {
          if(i>0 && j!=i)
          {
              return j;
          }
          if(i>0)
          {
                 j++;
          }
        }
        return j;  
    }
};
