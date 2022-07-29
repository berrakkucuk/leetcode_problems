/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    
    let len = nums.length;
    var ans = [];
    
    for(let i=0; i < len; i++) {
        ans[i] = nums[i];
    }
    
    for(i=len; i < 2*len; i++) {
        ans[i] = nums[i-len];
    }
    
    return ans;
};
