class Solution {
public:
    int findComplement(int num) {
        /**
 * @param {number} num
 * @return {number}
 */

    int n=2;
    int len = 0;
    int res=0;

    while(num>0){
        int a = num%n;
        if(a==0) res+=pow(2,len);
        len++;
        num = (num/n);
    }
    return res;
    }
};