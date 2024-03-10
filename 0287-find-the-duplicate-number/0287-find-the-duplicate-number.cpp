class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    // unordered_map <int,int> mp;
    //     for(auto it:nums)
    //     {
    //         mp[it]++;
    //     if(mp[it]>1)
    //         return it;
    //     }
    //     return -1;
    sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]){
            return nums[i];
            }
        }
     return -1;   
    }
};