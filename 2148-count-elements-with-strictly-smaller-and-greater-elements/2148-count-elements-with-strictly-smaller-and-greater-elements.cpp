class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int maximum=*max_element(nums.begin(),nums.end());
        int minimum=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<maximum && nums[i]>minimum)
            {
                count++;
            }
        }
        return count;
        
        
    }
};