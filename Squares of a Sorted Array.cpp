class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> vec{};
        for(auto &v:A){
            vec.push_back(v*v);
        }
        sort(vec.begin(), vec.end()); 
        return vec;
    }
};
