class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // unorderd_map<string,vector<string>> mp;
        unordered_map<string, vector<string>> mp;
        for(auto c:strs)
        {
            string word=c;
            sort(word.begin(),word.end());
            mp[word].push_back(c);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};