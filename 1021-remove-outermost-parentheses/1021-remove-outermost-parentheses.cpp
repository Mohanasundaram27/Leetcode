class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==41)
            j--;
            if(j!=0)
             res+=s[i];
            if(s[i]==40)
                j++;
        }
        return res;
        
    }
};