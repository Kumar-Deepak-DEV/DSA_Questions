/**
 * @param {number[]} nums
 * @return {number}
 */
var countDistinctIntegers = function (nums) {
    let m = nums.length
    let obj = {}
    let count = 0;
    for (let i = 0; i < m; i++) {
        let a = 0;
        let n = nums[i]
        while (n > 0) {
            let b = n % 10;
            a = a * 10 + b;
            n = n - b;
            n /= 10;
        }
        nums.push(a);
        if (obj[a] == undefined) {
            count++;
            obj[a] =1;
        }
        if (obj[nums[i]] == undefined) {
            count++
            obj[nums[i]] = 1;
        }
    }
    return count
};