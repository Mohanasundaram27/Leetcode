class Solution {
    public int removeDuplicates(int[] nums) {
        int j=1,c=1;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]==nums[i-1])
            
                continue;
            nums[j]=nums[i];
            j++;
            c++;
        }
        return c;
        
        
    }
}