/**
 * @param {number} n
 * @return {number}
 */
var getLeastFrequentDigit = function(n) {
    let obj={};
    let arr=[];
    while(n>0){
        let a=n%10;
        obj[a]=(obj[a] || 0)+1
        n=Math.floor(n/10);
    }
    let num=Infinity
    for(let char in obj){
        if(num>obj[char]){
            arr=[];
            arr.push(Number(char))
            num=obj[char]
        }
        else if (num==obj[char]){
            arr.push(Number(char))
        }
    }
    if(arr.length==1)return arr[0]
    let min=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]<min)min=arr[i]
    }
    return min;
};