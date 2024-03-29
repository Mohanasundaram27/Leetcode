class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> k;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
            
         }
        if(!ans.empty())
        {
            k.push_back(ans[0]);
            k.push_back(ans[ans.size()-1]);
        }
        else
        {
            return {-1,-1};
        }
        return k;
    
        
        
    
    
            
        
    }
};