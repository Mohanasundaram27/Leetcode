class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        unordered_map<int,int>map;
        int i,j,k,c=0;

        for(auto x:a){
            if(x>0)
            map[x]++;
        }

        for(i=1;i<a.size()+1;i++){
            if(map.find(i)==map.end())
            return i;

        }
        return a.size()+1;
        

           }
};