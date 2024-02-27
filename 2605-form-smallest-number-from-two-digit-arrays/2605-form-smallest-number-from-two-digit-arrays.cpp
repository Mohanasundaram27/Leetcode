class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
         map<int,int>mp;
        for(auto it:nums1)
        {
            mp[it]++;
        }
        for(auto it:nums2)
        {
            mp[it]++;
        }
        for(auto it:mp){
        if(it.second>1)
            return it.first;
        }
        int min1=*min_element(nums1.begin(),nums1.end());
        int min2 = *min_element(nums2.begin(),nums2.end());
          // string s= to_string(min(min1,min2))+to_string(max(min1.min2));
         string s= to_string(min(min1,min2))+to_string(max(min1,min2));
         return stoi(s);
        
        
    }
};