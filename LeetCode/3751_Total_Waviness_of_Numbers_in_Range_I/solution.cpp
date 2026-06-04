class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num2<=100)return 0;
        int count=0;
        for(int i = num1;i<=num2;i++){
            int n = i;
            string s="";
            while(n>0){
                int a = n%10;
                char c = '0'+a;
                s = c+s;
                n/=10;
            }
            for(int j = 1;j<s.size()-1;j++){
                if((s[j]<s[j-1] && s[j]<s[j+1]) || (s[j]>s[j-1] && s[j]>s[j+1])) count++;
            }
        }
        return count;
    }
};