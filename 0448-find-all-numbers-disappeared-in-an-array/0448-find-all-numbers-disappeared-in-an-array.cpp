class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
      vector<int> mp(n+1,0);
        vector<int> v;
    
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<mp.size();i++)
        {
            if(mp[i]==0)
            {
                v.push_back(i);
            }
        }
        return v;
        
    }
};