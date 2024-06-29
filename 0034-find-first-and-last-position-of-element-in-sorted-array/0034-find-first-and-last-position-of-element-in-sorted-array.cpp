class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        vector<int> ans(2,-1);
        while(left<=right)
        {
            if(nums[left]==target && ans[0]==-1)
            {
                ans[0]=left;
            }
            else if(nums[right]==target && ans[1]==-1)
            {
                ans[1]=right;
            }
            
            if(nums[left]<target)
                left++;
            if(nums[right]>target)
                right--;
            if(ans[0]!=-1  && ans[1]!=-1)
                break;
        }
        return ans;
        
    }
};