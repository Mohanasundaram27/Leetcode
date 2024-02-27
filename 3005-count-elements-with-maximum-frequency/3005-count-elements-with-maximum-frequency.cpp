class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0,sum=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            maxi=max(mp[nums[i]],maxi);
        }
        for(auto it:mp)
        {
            if(it.second==maxi)
            {
              sum+=it.second;  
            }
        }
        return sum;
        
    }
};