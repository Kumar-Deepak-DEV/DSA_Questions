/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    nums1.splice(m);
    nums2.splice(n);
    let uniq = [...nums1, ...nums2].sort((a,b)=>a-b);
    for(let i = 0; i<uniq.length;i++){
        nums1[i]=uniq[i];
    }
};
