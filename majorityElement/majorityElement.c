class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count=1;
    int key=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(key==nums[i])
        count++;
        else{
            count--;
            if(count==0)
            key=nums[i+1];
        }
    }
    return key;
    }
};
