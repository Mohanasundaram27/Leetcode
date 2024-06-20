class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1,mp2;
        for(int i=0;i<s.size();i++){
            char a=s[i],b=t[i];
            if((mp1.count(a) && mp1[a]!=b) ||  (mp2.count(b) && mp2[b]!=a))
                return false;
            mp1[a]=b;
            mp2[b]=a;
        }
        return true;
    }
};