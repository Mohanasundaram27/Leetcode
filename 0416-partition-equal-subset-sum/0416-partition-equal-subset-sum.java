
class Solution {
    public boolean canPartition(int[] nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        // If total sum is odd, cannot partition into two equal subsets
        if (totalSum % 2 != 0) {
            return false;
        }
        
        int targetSum = totalSum / 2;
        boolean[] dp = new boolean[targetSum + 1];
        dp[0] = true;
        
        for (int num : nums) {
            for (int j = targetSum; j >= num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        
        return dp[targetSum];
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums1 = {1, 5, 11, 5};
        System.out.println(solution.canPartition(nums1)); // Output: true

        int[] nums2 = {1, 2, 3, 5};
        System.out.println(solution.canPartition(nums2)); // Output: false
    }
}
