class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<nums[i].size();j++)
          {
              mp[nums[i][j]]++;
          }
        }
        for(auto it:mp)
        {
            if(it.second==n)
                v.push_back(it.first);
        }
        return v;
        
    }
};