class Solution {
public:
    int differenceOfSums(int n, int m) {
        // int a = n * (n + 1) / 2;
        // int b = m * (n / m) * ((n / m) + 1); 
        // b=(b+1)*b*m;
        // here used ap =>  (n/2(2a+(n-1)d))*2 last 2 was to subtract that number twice, a=0, n=b+1;
        // return a - b;

        return (n * (n + 1) / 2) - (m * (n / m) * ((n / m) + 1));
    }
};