class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum =0;
        int a=x;
        while(a>0){
            sum += a%10;
            a/=10;
            // cout<<a<<" "<<x<< " " <<sum<<endl;
        }
        if(x%sum==0) return sum;
        else return -1;
    }
};