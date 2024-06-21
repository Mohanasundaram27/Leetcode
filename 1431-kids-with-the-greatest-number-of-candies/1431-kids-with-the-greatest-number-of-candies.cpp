class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi_candies=*max_element(candies.begin(),candies.end());
       vector<bool> result(candies.size());
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maxi_candies)
            {
               result[i]=true;
            }
            else
            {
                result[i]=false;
            }
        }
        return result;
        
    }
};