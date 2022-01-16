class Solution {
public:
    vector<int>nums;
    Solution(vector<int>& nums) {
         this->nums = nums;
    }
    
    int pick(int target) {
         int cnt = 0;
         int index = -1;
         for(int i = 0;i < nums.size();i++){
             if(nums[i] == target){
                 cnt++;
                 if(rand()%cnt == 0){
                     index = i;
                 }
             }
         }
         return index;
    }
};
