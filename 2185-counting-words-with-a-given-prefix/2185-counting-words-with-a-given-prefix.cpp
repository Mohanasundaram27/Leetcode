class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
       int k=pref.size();
        int count=0;
        for(auto it: words)
        {
            if(it.substr(0,k)==pref)
            {
                count++;
            }
        }
        return count;
        
    }
};