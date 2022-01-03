class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
    vector<vector<int>>ans;
    if(a.size() != m*n){
        return ans;
    }
    for(auto it = a.begin();it != a.end();it+=n){
        ans.emplace_back(it,it+n);
    }
    return ans;
    }
};
