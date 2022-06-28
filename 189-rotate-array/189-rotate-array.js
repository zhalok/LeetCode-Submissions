/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    let nums1=[];
    // let nums2 =[];
    let leftSegment = k%nums.length;
    for(let i=(nums.length-leftSegment);i<nums.length;i++)
        nums1.push(nums[i]);
    for(let i=0;i<(nums.length-leftSegment);i++) 
        nums1.push(nums[i]);  
    for(let i=0;i<nums1.length;i++)
        nums[i]=nums1[i];
 
    // return nums1;
};