class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxi=-1;
        while(left<right)
        {
            int w=right-left;
            int h=min(height[left],height[right]);
            maxi=max(maxi,w*h);
    
        if(height[left]<height[right])
               left++;
        else
            right--;
        
        }
        return maxi;
    }
};