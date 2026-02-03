/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let obj1={}
    let obj2={}
    let arr=[];
    for(i=0;i<nums1.length;i++){
        if(obj1[nums1[i]]==undefined) obj1[nums1[i]]=1;
    }
    for(i=0;i<nums2.length;i++){
        if(obj2[nums2[i]]==undefined) obj2[nums2[i]]=1;
    }
    for(let char in obj1){
        if(obj1[char]==obj2[char]) arr.push(Number(char))
    }
    return arr
};