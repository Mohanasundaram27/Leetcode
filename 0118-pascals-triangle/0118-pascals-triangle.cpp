class Solution {
public:
    vector<int> solve(int row)
    {
        vector<int> temp;
        temp.push_back(1);
        long long res=1;
        for(int col=1;col<row;col++)
        {
            res=res*(row-col)/col;
            temp.push_back(res);
        }
        return temp;
    }
    
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascal;
        for(int i=1;i<=n;i++)
        {
            pascal.push_back(solve(i));
        }
        
        
        
        
        
        return pascal;
    }
};