/**
 * @param {number} n
 * @return {boolean}
 */
var isStrictlyPalindromic = function (n) {
    function baseCon(i, n) {
        let b = i;
        let s = ""
        while (n > 0) {
            let m = n % i;
            s = m + s;
            n = Math.floor(n / i);
        }
        return s;
    }
    for (let i = 2; i < n - 1; i++) {
        // let sum = n.toString(i)
        let sum = baseCon(i, n)
        let left = 0;
        let right = sum.length - 1;
        while (left < right) {
            if (sum[left] != sum[right]) return false
            left++;
            right--
        }
    }
    return true;
};