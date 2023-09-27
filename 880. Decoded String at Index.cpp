class Solution {
public:
    string decodeAtIndex(string s, int k) 
    {
        long long ctr = 0;
        for(int i=0;i<s.length();i++)
        {
            int cval = (int) s[i];
            if(cval>=49 && cval<=57)
            {
                int rep = (cval - 48)-1;
                ctr+=ctr*rep;
            }
            else
            {
                ctr++;
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            char c = s[i];
            int cval = (int) s[i];
            k = k % ctr;
            if(cval>=49 && cval<=57)
            {
                int val = cval-48;
                ctr =  ctr/val;
            }
            else if(k==0 || k==ctr)
            {
                string ans = "";
                ans += c;
                return ans; 
            }
            else
            {
                ctr--;
            }
        }
        return "";
    }
};
