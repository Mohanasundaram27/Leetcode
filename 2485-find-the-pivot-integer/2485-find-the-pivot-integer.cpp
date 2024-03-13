class Solution {
public:
    int pivotInteger(int n) {
        int ls=0;
        int rs=0;
        for(int i=1;i<=n;i++)
        {
           ls=i * (i + 1) / 2;
            rs = n * (n + 1) / 2 - i * (i - 1) / 2;
            if(ls==rs)
                return i;
        }
        return -1;
        
    }
};