/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
     if (nums.length === 0) return 0; // Edge case

    let index = 1; // Pointer for the next unique position

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[i - 1]) { // Check if the current number is unique
            nums[index] = nums[i]; // Place unique number at nums[index]
            index++; // Move index forward
        }
    }
    
    return index; // k = Number of unique elements
    
};