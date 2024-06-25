class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==n)
            return ;
        
        k=k%n;
        
        
        int left=0;
        int right=n-1-k;
        int nextleft=right+1;
        while(left<right)
        {
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        right=nums.size()-1;
        while(nextleft<right)
        {
            int temp=nums[nextleft];
            nums[nextleft]=nums[right];
            nums[right]=temp;
            nextleft++;
            right--;
        }
        left=0;
        right=nums.size()-1;
        while(left<right)
        {
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
                 
        }
        
    }
};