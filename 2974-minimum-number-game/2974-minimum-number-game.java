class Solution {
    public int[] numberGame(int[] nums) {
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        for(int i=0;i<nums.length;i++){
            pq.add(nums[i]);
        }
        int n=nums.length;
        int arr[]=new int[n];
        int i=0;
        while (!pq.isEmpty()) {
            int a=pq.poll(),b=0;
            if(!pq.isEmpty()){
                b=pq.poll();
                arr[i++]=b;
            }
            arr[i++]=a;
            
        }
        return arr;
    }
}