class Solution {
    public int maxProduct(int[] nums) {
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<nums.length;i++)
        {
            pq.add(nums[i]);
        }
        int a=pq.poll()-1;
        int b=pq.poll()-1;
        
        
        
        return a*b;
    }
}