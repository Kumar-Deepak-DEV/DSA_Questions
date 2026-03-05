class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector <int> fibo={1,1};
        int f1=1;
        int f2=1;
        int f3=f1+f2;
        while(f3<=k){
            if(f1+f2 > k) break;
            f3 = f1+f2;
            fibo.push_back(f3);
            f1=f2;
            f2=f3;
        }

        int count=0;
        int right=fibo.size()-1;
        while(k>0){
            if(fibo[right]<=k) {
                while(fibo[right]<=k) {
                    count++;
                    k-=fibo[right];
                }
            }
            right--;
        }
        return count;
    }
};