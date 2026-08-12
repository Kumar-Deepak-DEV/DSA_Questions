class Solution {
public:
    int reverse(int x) {
        bool boo = false;
        long long num = x;
    if(x<0){
        boo = true;
        num *= -1;
    }
    string s=to_string(num);
    std::reverse(s.begin(),s.end());
    long long y =stoll(s);
    if(boo) y *= -1;
    if(y>-2147483649 && y<2147483648){
    return y;}
    else return 0;
    }
};