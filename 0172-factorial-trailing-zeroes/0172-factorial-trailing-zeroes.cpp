class Solution {
public:
    int trailingZeroes(int n) {
        if(n<0)
            return 0;
        int sum=0;
        while(n>=5)
        {
          sum=sum+  n/5;
            n=n/5;
        }
        return sum;
    }
};