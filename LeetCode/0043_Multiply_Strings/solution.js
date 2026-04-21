/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function(num1, num2) {
    let n = BigInt(num1);
    let m = BigInt(num2);
    let x = BigInt(n * m)
    return String(x)
};