class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> k(nums.size() + 1, 0);
        vector<int> ans;
      for(int num:nums)
      {
          k[num]++;
          
       }
       
        for(int i=1;i<k.size();i++)
        {
            if(k[i]>1)
            {
                ans.push_back(i); 
            }
        }
        return ans;
}
};