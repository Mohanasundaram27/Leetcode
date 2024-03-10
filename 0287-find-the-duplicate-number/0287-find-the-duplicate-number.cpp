class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map <int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        if(mp[it]>1)
            return it;
        }
        return -1;
        
    }
};