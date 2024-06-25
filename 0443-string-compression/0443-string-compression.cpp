class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int m=0;
        for(int i=1;i<=chars.size();i++)
        {
            if(i<chars.size() && chars[i]==chars[i-1])
            {
                count++;
            }
            else
            {
                chars[m++]=chars[i-1];
                if(count>1)
                {
                    string temp=to_string(count);
                    for(char ch :temp)
                    {
                        chars[m++]=ch;
                    }
                }
                count=1;
            }
        }
        return m;
    }
};