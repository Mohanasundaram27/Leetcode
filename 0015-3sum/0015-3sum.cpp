class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // set<vector<int>> s;
        // vector<vector<int>> output;
        // for (int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         for(int k = j+1; k < nums.size(); k++){
        //             vector<int> temp;
        //             if(nums[i] + nums[j] + nums[k] == 0){
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 s.insert(temp);
        //             }
        //         }
        //     }
        // }
        // for(auto allTriplets : s)
        //     output.push_back(allTriplets);
        // return output;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>output;
        int target=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
           int k=nums.size()-1;
        while(j<k)
        {
            int sum=nums[i] + nums[j] + nums[k];
            if(sum==target)
            {
                s.insert({nums[i],nums[j],nums[k]});
                    j++;
                k--;
            }
            else if(sum<target)
            {j++;
             }
            else
            {
                k--;
            }
        }
        }
        for(auto &it:s)
    output.push_back(it);
        return output;
    }
};