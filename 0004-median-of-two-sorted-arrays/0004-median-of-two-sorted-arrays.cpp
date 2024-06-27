#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int k = 0;
        
        vector<int> merged(n + m);
        for (int i = 0; i < n; i++) {
            merged[k++] = nums1[i];
        }
        for (int i = 0; i < m; i++) {
            merged[k++] = nums2[i];
        }
        
        sort(merged.begin(), merged.end());
        
        int total = merged.size();
        if (total % 2 == 1) {
            return static_cast<double>(merged[total / 2]);
        } else {
            int mid1 = merged[total / 2 - 1];
            int mid2 = merged[total / 2];
            return (static_cast<double>(mid1) + static_cast<double>(mid2)) / 2.0;
        }
    }
};