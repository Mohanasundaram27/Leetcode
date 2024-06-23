class Solution {
public:
    int trap(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int leftmax=0,rightmax=0;
        int res=0;
        while(left<=right)
        {
            if(nums[left]<=nums[right])
            {
                if(nums[left]>=leftmax)
                {
                    leftmax=nums[left];
                }
                else
                {
                    res+=leftmax-nums[left];
                }
                left++;
            }
            else
            {
                if(nums[right]>rightmax)
                {
                    rightmax=nums[right];
                }
                else
                {
                    res+=rightmax-nums[right];
                }
                right--;
            }
        }
        return res;
       
    }
};