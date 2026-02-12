/**
 * @param {string} num
 * @return {string}
 */
var largestGoodInteger = function (num) {
    let sum = 0
    let temp;
    for (let i = 0; i < num.length; i++) {
        if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
            temp = num[i] + num[i + 1] + num[i + 2]
            // console.log(temp)
            let tie = Number(temp)
            if (tie > (sum)) sum = tie
        }
    }
    if(temp==undefined) return ""
    if(sum==0) sum ="000"
    return String(sum)
};