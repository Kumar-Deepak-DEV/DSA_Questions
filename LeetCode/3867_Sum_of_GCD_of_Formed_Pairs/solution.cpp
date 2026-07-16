class Solution {
public:
    int prefix(int a, int b){
        if(a<b){
            int k = a;
            a = b;
            b = k;
        }
        
        while(b != 0){
            int k = b;
            b = a%b;
            a = k;
        }
        return a;
    } 
    long long gcdSum(vector<int>& nums) {
        long long sum = 0;
        int maxi = 0;
        vector<int>gcd;
        for(int x : nums){
            if(x>maxi) maxi = x;
            gcd.push_back(prefix(x,maxi));
        }
        sort(gcd.begin(),gcd.end());
        int i = 0;
        int j = gcd.size()-1;
        while(i<j){
            sum+=prefix(gcd[i],gcd[j]);
            j--;
            i++;
        }
        return sum;
    }
};