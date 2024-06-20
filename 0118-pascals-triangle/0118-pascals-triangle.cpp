class Solution {
public:
    vector<int> solve(int row){
        vector<int> temp;
        temp.push_back(1);
        long long res=1;
        for(int col=1;col<row;col++){
            res=(res*(row-col))/col;
            temp.push_back(res);
        }
        return temp;
    }
    vector<vector<int>> generate(int n){
        vector<vector<int>> res;
        for(int row=1;row<=n;row++){
            res.push_back(solve(row));
        }
        return res;
    }
};