var maxProduct = function(nums) {
    let prefixSum = 1;
    let suffixSum = 1;
    let maximumProduct = -Infinity;
    const n = nums.length;
    for(let i=0;i<n;i++){
        prefixSum = prefixSum*nums[i];
        suffixSum = suffixSum*nums[n-i-1];
        maximumProduct = Math.max(maximumProduct, Math.max(prefixSum,suffixSum));
        if(prefixSum === 0) {
            prefixSum = 1;

        }
        if(suffixSum === 0) {
            suffixSum = 1;
        }
    }
    return maximumProduct;
};