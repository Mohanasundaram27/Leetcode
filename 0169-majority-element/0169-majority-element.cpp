class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count=0;
      int el;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                el=nums[i];
            }
                
                else if(nums[i]==el)
                {
                    count++;

                }
                else
                {
                    count--;
                }
            }
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(el==nums[i])
            {
                count1++;
                    
            }
        }
        if(count1>nums.size()/2)
        {
            return el;
        }
        return -1;
    }
};