class Solution {
public:
    int strStr(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        int count=0;
        for(int i=0;i<n1;i++){
           int j;
           for(j=0;j<n2;j++){
               if(s1[i+j]!=s2[j]){
                   break;
               }
           }

        
        if(j==n2){
            return i;
        }
        }
        return -1;
        
    }
};
