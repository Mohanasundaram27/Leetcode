import java.util.HashMap;
import java.util.Map;

class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        // Initialize a memoization map to store already computed results
        Map<String, Integer> memo = new HashMap<>();
        return calculateWays(nums, 0, target, memo);
    }
    
    private int calculateWays(int[] nums, int index, int target, Map<String, Integer> memo) {
        // Check if the result for the current index and target is already computed
        String key = index + "," + target;
        if (memo.containsKey(key)) {
            return memo.get(key);
        }
        
        // Base case: if we reach the end of the array
        if (index == nums.length) {
            // If target is zero, we found a valid combination
            if (target == 0) {
                return 1;
            }
            // Otherwise, no valid combination found
            return 0;
        }
        
        // Calculate the number of ways considering '+' sign
        int waysWithPlus = calculateWays(nums, index + 1, target - nums[index], memo);
        
        // Calculate the number of ways considering '-' sign
        int waysWithMinus = calculateWays(nums, index + 1, target + nums[index], memo);
        
        // Total number of ways is the sum of ways with '+' and '-' signs
        int totalWays = waysWithPlus + waysWithMinus;
        
        // Store the result in the memoization map
        memo.put(key, totalWays);
        
        return totalWays;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums1 = {1, 1, 1, 1, 1};
        int target1 = 3;
        System.out.println(solution.findTargetSumWays(nums1, target1)); // Output: 5

        int[] nums2 = {1};
        int target2 = 1;
        System.out.println(solution.findTargetSumWays(nums2, target2)); // Output: 1
    }
}
