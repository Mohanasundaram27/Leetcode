class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        int k=0;
        int[] merged = new int[n + m];
        for(int i=0;i<n;i++)
        {
            merged[k++]=nums1[i];
        }
        for(int i=0;i<m;i++)
        {
            merged[k++]=nums2[i];
        }
         Arrays.sort(merged);
        int total=merged.length;
        if(total%2==1)
        {
            return (double)merged[total/2];
        }
      
        else
        {
         int mid1=merged[total/2-1];
        int mid2=merged[total/2];
          return ((double) mid1+(double)mid2)/2.0;  
        }
    }
}