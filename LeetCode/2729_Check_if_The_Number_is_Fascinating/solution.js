/**
 * @param {number} n
 * @return {boolean}
 */
var isFascinating = function(n) {
    let n2=2*n
    let n3=3*n
    let obj={};
    while(n>0){
        let temp = n%10;
        if(temp == 0)return false;
        else if(obj[temp]==undefined) obj[temp]=1;
        else return false;
        n=Math.floor(n/10)
    }
    while(n2>0){
        let temp = n2%10;
        if(temp == 0)return false;
        else if(obj[temp]==undefined) obj[temp]=1;
        else return false;
        n2=Math.floor(n2/10)
    }
    while(n3>0){
        let temp = n3%10;
        if(temp == 0)return false;
        else if(obj[temp]==undefined) obj[temp]=1;
        else return false;
        n3=Math.floor(n3/10)
    }
    for(let i=1;i<10;i++){
        if(obj[i] == undefined) return false
    }
    return true
};