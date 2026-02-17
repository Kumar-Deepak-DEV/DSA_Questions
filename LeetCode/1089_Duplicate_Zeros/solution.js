/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */
var duplicateZeros = function (arr) {
    let i = 0;
    let j = 0;
    let arry = [...arr];
    while (i < arr.length) {
        if (arry[j] == 0) {
            if (i == arr.length - 1) arr[i] = 0
            else {
                arr[i] = 0;
                arr[i + 1] = 0;
                i++;
            }
        }
        else arr[i] = arry[j]
        i++;
        j++;

    }
};