class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    if(n < 3) return false;
    int small = INT_MAX,mid = INT_MAX;
    for(auto x : nums){
        if(x <= small){
            small = x;
        }else if(x <= mid){
            mid = x;
        }else{
            return true;
        }
    }
    return false;
    }
};
