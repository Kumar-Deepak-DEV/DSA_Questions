class Solution {
public:
    int maximum69Number (int num) {
        int index=1e9;
        int count =0;
        int n = num;
        while(n>0){
            if(n%10==6) index=count;
            count++;
            n/=10;
        }
        if(index<1e9)num+=3*pow(10,index);
    return num;
    }
};