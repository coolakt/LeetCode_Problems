class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0, bob = 0, n = colors.length();
        int count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            
            if(colors[i] == 'A'){
                count1++;
                count2 = 0;
            }
            else{
                count2++;
                count1 = 0;
            }
            if(count1 >= 3){
                alice++;
            }
            if(count2 >= 3){
                bob++;
            }
        }
        if(alice > bob) return true;
        return false;
    }
};
