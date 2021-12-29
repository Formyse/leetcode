class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();
    int sum = 0;
    unordered_map<int,int>cnt;
    for(int c = n - 2;c >= 2;--c){
        ++cnt[nums[c+1]];
        for(int a = 0;a < c;++a){
            for(int b = a + 1;b < c;++b){
                if(int sum = nums[a]+nums[b]+nums[c];cnt.count(sum)){
                    ans+=cnt[sum];
                }
            }
        }
    }
    return ans;
    }
};


class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();
    int sum = 0;
    unordered_map<int,int>cnt;
    for(int b = n-3;b>=1;--b){
        for(int d = b+2;d<n;++d){
            ++cnt[nums[d]-nums[b+1]];
        }
        for(int a = 0;a<b;++a){
            sum = nums[a]+nums[b];
            if(cnt.count(sum))
            ans+=cnt[sum];
        }
    }
    return ans;
    }
};


class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
    int n = nums.size();
    int ans=0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int a = j+1;a<n;a++){
                for(int b=a+1;b<n;b++){
                    if(nums[i]+nums[j]+nums[a]==nums[b])
                    ans++;
                }
            }
        }
    }
     return ans;  
    }
};
