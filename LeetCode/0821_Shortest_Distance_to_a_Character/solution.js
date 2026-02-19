/**
 * @param {string} s
 * @param {character} c
 * @return {number[]}
 */
var shortestToChar = function(s, c) {
    let arr=[];
    let res=[];
    for(let i=0; i<s.length;i++){
        if(s[i]==c) arr.push(i)
    }
    for(let i=0;i<s.length;i++){
        let min=s.length;
        let temp=0; 
        for(let j=0;j<arr.length;j++){
            temp=Math.abs(arr[j]-i);
            if(min>temp)min = temp;
        }
        res.push(min)
    }
    return res;
};