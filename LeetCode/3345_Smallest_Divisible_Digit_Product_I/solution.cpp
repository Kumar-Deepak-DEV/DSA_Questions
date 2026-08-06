class Solution {
private: 
    int mult(int n){
        int prod = 1;
        while(n>0){
            int a = n%10;
            prod *= a;
            n/=10;
            if(a == 0)return 0;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        if(n % 10 == 0) return n;
        int k = ((n/10) +1)*10;
        for(int i = n; i<= k;i++){
            int m = mult(i);
            if(m % t == 0) return i;
        }
        return -1;
    }
};