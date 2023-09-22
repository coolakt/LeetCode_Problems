class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0, v = 1;
        while(right>0){
            if(right&1 and left&1) ans += v;  
            else if((right&1)^(left&1)) ans = 0; 
            v = v<<1;       
            left = left>>1;     right = right>>1;
        }
        return ans;
    }
};
