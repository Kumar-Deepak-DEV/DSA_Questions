/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function (nums) {
    let obj = {};
    let num = false;
    let store = 0;
    for (let i = 0; i < nums.length; i++)obj[nums[i]] = (obj[nums[i]] || 0) + 1
    for (let char in obj) {
        if (obj[char] == 1) {
            if (num == false) {
                num = true;
                store = Number(char)
            }
            else return [Number(char), store];
        }
    }
};