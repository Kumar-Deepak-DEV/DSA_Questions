class Solution {
public:
    bool checkDivisibility(int n) {
        int num =n;
        int sum = 0;
        int prod = 1;
        while(num>0){
            int a = num%10;
            sum+= a;
            prod *= a;
            num/=10;
        }
        return(!(n%(sum+prod)));
    }
};