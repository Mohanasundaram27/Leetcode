class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int k=pref.size();
        int count=0;
        for(auto word:words)
        {
          if(word.substr(0,k)==pref){  
              count++;
          }
        }
            return count;
        
    }
};