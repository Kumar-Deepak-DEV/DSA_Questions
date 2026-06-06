class Solution {
public:
    bool consecutiveSetBits(int n) {
        int  prev = 0;
        int  curr = 0;
        int  count = 0;
        
        while(n>0){
            prev = curr;
            curr = n%2;
            n/=2; 
            if(prev == 1 && curr == 1) count++;
        }
        return(count==1);
    }
};