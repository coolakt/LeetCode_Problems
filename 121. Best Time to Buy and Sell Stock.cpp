class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int curr=prices[0];
       for(int i=1; i<prices.size();i++)
       {
          if(curr>prices[i]){
              curr=prices[i];
          }
          else{
              maxprofit=max(maxprofit,prices[i]-curr);
          } 
       }
       return maxprofit;
    }
};
