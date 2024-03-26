class Solution {
    public int firstMissingPositive(int[] nums) {
        Set<Integer> pq=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            pq.add(nums[i]);
        }
        int a=1;
        while(pq.contains(a))
            
        {
            a++;
        }
        return a;
    }
}