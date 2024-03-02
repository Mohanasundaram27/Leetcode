class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i]*nums[i];
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        return v;
    
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]<nums[j])
//                 {
//                     int temp=nums[i];
//                     nums[i]=nums[j];
//                     nums[j]=temp;
                    
//                 }
//             }
//         }
//         vector<int>v;
//         for(int i=0;i<nums.size();i++)
//         {
//         int ans=nums[i]*nums[i];
//             v.push_back(ans);
//         }
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     int a=nums[i]*nums[i];
//         //     v.push_back(a);
//         // }
//         return v;
        
    }
};