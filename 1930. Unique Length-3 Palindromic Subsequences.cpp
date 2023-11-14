class Solution {
public:
    int countPalindromicSubsequence(string s) {
       unordered_map<char,int> freq,curr;
       unordered_map<string,int> vis;
       int ans = 0;

       for(auto ch : s) {
           freq[ch]++;
       }
       curr[s[0]]++;
       for(int i=1; i<s.length()-1; i++) {
           for(char c='a'; c<='z'; c++) {
               if(curr[c] > 0 && (freq[c]-curr[c] - (s[i] == c)) > 0)
               {
                   string temp = "";
                   temp += c;
                   temp += s[i];
                   temp += c;
                   if(vis.count(temp) == 0)
                   {
                       vis[temp]++;
                       ans++;
                   }
               }
           }
         curr[s[i]]++;
       }
    return ans;
    }
};
