class Solution {
public:
    vector<int> getRow(int row) {
        row+=1;
        vector<int>temp;
        temp.push_back(1);
        long long res=1;
        for(int col=1;col<row;col++)
        {
            res=res*(row-col)/col;
            temp.push_back(res);
            
        }
        return temp;
    }
};