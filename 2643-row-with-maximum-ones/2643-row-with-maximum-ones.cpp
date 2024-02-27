class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        int maxi=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            int ones=0;
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==1){
                    ones++;
                }
            }
            if(ones>maxi){
                maxi=ones;
                index=i;
             }
        }
        return{index,maxi};
    }
};