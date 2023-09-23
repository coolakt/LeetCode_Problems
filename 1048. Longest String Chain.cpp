
static bool compr(string &a, string &b){
    return a.length()<b.length();
}

class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int>dp;
        int ans=0;
        sort(words.begin(),words.end(),compr);
        for(string word : words){
            for(int i=0;i<word.length();i++){
                string pred = word.substr(0,i) + word.substr(i+1);
                dp[word] = max(dp[word],dp[pred]+1);
            }
            ans = max(ans,dp[word]);
        }
        
        return ans;
    }
};
