class Solution {
public:
    bool isSubsequence(string s, string t) {
         int subsize=s.size();
          int tarsize=0;
          int l=-1;
        for(int i=0; i<s.size(); i++){
            for(int j=l+1; j<t.size(); j++){
                if(s[i] == t[j]){
                    tarsize++;
                    l=j;
                    break;
                }
            }
           
        }
       
         if(subsize == tarsize){
                return 1;
            }
        return 0;
    }
};
