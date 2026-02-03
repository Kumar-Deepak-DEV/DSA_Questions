/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function(nums) {
    let arr=[];
    nums.sort((a,b)=>a-b)
    let i=0;
    let j=nums.length-1;
        while(i<j){
            arr.push((nums[i]+nums[j])/2)
            i++;
            j--;
        }
        let min=arr[0]
        for(let i=0;i<arr.length;i++){
            if(min>arr[i]) min=arr[i]
        }
        return min
};