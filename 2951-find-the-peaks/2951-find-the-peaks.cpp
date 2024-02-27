class Solution {
public:
    vector<int> findPeaks(vector<int>& n) {
        vector<int> v;
        for(int i=1;i<n.size()-1;i++){
            if(n[i]>n[i-1] && n[i]>n[i+1]){
                v.push_back(i);}
             }
        return v;
    }
};
// vector<int> v;
//         for(int i=1;i<nums.size()-1;i++){
//         //     // if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//         //         v.push_back(i);
//         //     }
//         // }
//         return v;