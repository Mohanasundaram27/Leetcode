class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        if(k==n || nums.length==1)
            return ;
        
        
        if(k>nums.length)
            k=k%n;
        
        
        
        int left = 0;
        int right =nums.length-1-k;
        int nextleft=right+1;
        while(left<right)
        {
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        right=nums.length-1;
        while(nextleft<right)
        {
            int temp=nums[nextleft];
            nums[nextleft]=nums[right];
            nums[right]=temp;
            nextleft++;
            right--;
        }
        left=0;
        right=nums.length-1;
         while(left<right)
        {
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
    }
}