class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int c=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]!=' ')
                c++;
            else if(c!=0)
                break;
        }
        return c;
        
    }
};