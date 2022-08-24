/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let start = 0 ;
    let end = 0;
    while(start != nums.length && end!=nums.length){
        if(nums[end]!=0 && nums[start]==0){
            [nums[end], nums[start]] = [nums[start], nums[end]];
            while(nums[start]!=0)
                start++;
            end++;
        }
        else if(nums[end]!=0 && nums[start]!=0){
            start++;
            end++;
        }
        else{
            end++;
        }
    }
    
};