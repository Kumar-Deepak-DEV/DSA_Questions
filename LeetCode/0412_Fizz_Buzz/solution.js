/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let j=1;
    let arr=[]
    while(j<=n){
        if(j%15==0) arr.push("FizzBuzz")
        else if (j%5==0) arr.push("Buzz")
        else if( j%3== 0) arr.push("Fizz")
        else arr.push(`${j}`)
        j++
    }
    return arr;
};