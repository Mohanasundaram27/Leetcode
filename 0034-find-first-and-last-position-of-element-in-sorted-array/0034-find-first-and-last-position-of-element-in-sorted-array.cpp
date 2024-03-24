class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        // Initialize an empty vector to store indices where the target is found
        vector<int> mp;
        // Initialize another vector to store the result
        vector<int> k;
        
        // Iterate through the input vector
        for(int i = 0; i < v.size(); i++) {
            // If the current element equals the target, store its index in 'mp'
            if(v[i] == target) {
                mp.push_back(i);
            }
        }
        
        // If 'mp' is not empty, store the first and last indices of 'mp' in 'k'
        if(!mp.empty()) {
            k.push_back(mp[0]); // First index
            k.push_back(mp[mp.size()-1]); // Last index
        }
        // If 'mp' is empty, store {-1, -1} in 'k'
        else {
            k = {-1, -1};
        }
        
        // Return the result vector 'k'
        return k;
    }
};
