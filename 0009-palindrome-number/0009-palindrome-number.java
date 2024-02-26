class Solution {
    public boolean isPalindrome(int x) {
        int temp=x;
        int rev=0,rem=0;
        while(x>0)
        {
            rev=x%10;
            rem=rem*10+rev;
            x/=10;
        }
if(temp==rem)
return true;
else
return false;
}
}