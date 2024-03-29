class Solution {
    public int reverse(int x) {
        long rem,rev=0;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev>Integer.MAX_VALUE || rev<Integer.MIN_VALUE)
        {
            return 0;
        }
        return (int)rev;
    }
}