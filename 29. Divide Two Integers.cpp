class Solution {
public:
    long long divide(long long dividend, long long divisor) 
    {
        long long ans=dividend/divisor;  
        if(ans>2147483647) return 2147483647; 
      
        return ans;
    }
};
