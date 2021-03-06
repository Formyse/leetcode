class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    if(nums.size()<=1)return;
    int j=nums.size()-1;
    while(j-1>=0&&nums[j-1]>=nums[j]){--j;}
    if(j==0){
        for(int i=0;i<nums.size()/2;i++){
        swap(nums[i],nums[nums.size()-1-i]);
        }
        return;
    }
    int r=nums.size()-1;
    while(r>=j){
        if(nums[r]>nums[j-1])break;
        --r;
    }
    swap(nums[r],nums[j-1]);
    int cnt=(nums.size()-j)/2;
    int i=0;
    while(cnt>0){
        swap(nums[j+i],nums[nums.size()-1-i]);
        --cnt;
        ++i;
    }
    return;
    }
};
