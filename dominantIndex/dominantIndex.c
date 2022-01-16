class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)
    return 0;
    int index = 0;
    int max = nums[0];
    for(int i = 1;i < n;i++){
        if(nums[i] > max){
            index = i;
            max = nums[i];
        }
    }
    for(int i = 0;i < n;i++){
        if(i != index && nums[i]*2 > nums[index]){
            return -1;
        }
    }
    return index;
    }
};
