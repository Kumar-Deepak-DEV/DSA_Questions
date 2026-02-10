/**
 * @param {number} left
 * @param {number} right
 * @return {number[]}
 */
var selfDividingNumbers = function(left, right) {
    let res=[];
    while(left<=right){
        let a=left;
        while(a>0){
            let num=a%10
            if(left%num!=0) break;
            a-=num;
            a/=10;
            if(a==0)res.push (left)
        }
        left++;
    }
    return res
};