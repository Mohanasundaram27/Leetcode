class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        vector <int> m;
        for(auto it : mp) {
            if(it.second > 1)
                m.push_back(it.first);
                
        }
        vector<int> l;
        for(int i = 1; i <= n; i++) {
            if(mp.find(i) == mp.end()) {
                l.push_back(i);
            }
        }
        ans.insert(ans.end(), m.begin(), m.end());
        ans.insert(ans.end(), l.begin(), l.end());
        return ans;
        
    }
};   
