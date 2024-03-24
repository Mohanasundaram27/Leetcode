class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                mp.push_back(i);
            }
        }
        return mp;
    }
};