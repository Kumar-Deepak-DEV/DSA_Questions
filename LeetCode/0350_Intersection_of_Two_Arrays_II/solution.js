/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let obj1={};
    let obj2={};
    let arr=[];
    for(let i=0;i<nums1.length;i++){
        obj1[nums1[i]]=(obj1[nums1[i]] || 0)+1;
    }
    for(let i=0;i<nums2.length;i++){
        obj2[nums2[i]]=(obj2[nums2[i]] || 0)+1;
    }
    for(let char in obj1){
        if(obj2[char] == undefined) continue;
        let a=obj1[char]<obj2[char]?obj1[char]:obj2[char];
        for(let i=0; i<a;i++) arr.push(Number(char))
    }
    return arr;
};