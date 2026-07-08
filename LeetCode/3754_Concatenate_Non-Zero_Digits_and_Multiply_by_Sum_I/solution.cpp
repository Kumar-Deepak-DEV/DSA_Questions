class Solution {
public:
    long long sumAndMultiply(int n) {
        // string s = to_string(n);
        int count = 0;
        int sum = 0;
        int num = 0;
        int x = n;
        while(x>0){
            int a = x%10;
            if(a>0) {
                sum+=a;
                num = a*pow(10,count) + num;
                count++;
            }
            x/=10;
        }
        long long res = sum;
        res*=num;
        return res;
    }
};