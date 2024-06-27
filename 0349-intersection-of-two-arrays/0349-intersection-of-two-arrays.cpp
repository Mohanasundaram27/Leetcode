class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        vector<int> result;
        for(auto num:s1)
        {
            if(s2.find(num)!=s2.end())
            {
                result.push_back(num);
            }
        }
        return result;
        
    }
};