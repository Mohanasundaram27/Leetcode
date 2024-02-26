class Solution {
public:
vector<string> table {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
string convertor(string &s){
    string result;
    for(auto it : s){
        result += table[it - 'a'];
    }
    return result;
}
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, bool> tmp;
        for(auto &it : words){
            tmp[convertor(it)] = true;
        }
        return tmp.size();
    }
};