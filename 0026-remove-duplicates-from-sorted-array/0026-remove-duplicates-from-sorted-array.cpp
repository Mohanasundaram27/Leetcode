class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count=1;
        int i=1;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]==nums[j-1])
                continue;
            nums[i]=nums[j];
            i++;
             count++;
        }
        return count;
    }
};