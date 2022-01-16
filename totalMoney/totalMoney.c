class Solution {
public:
    int totalMoney(int n) {
    int a = n/7;
    int b = n%7;
    int ans = 0;
    int count=0;
    for(int i = 1;i<a;i++){
       count+=i;
    }
    ans = a*28+count*7;
    for(int i = a + 1;i <= a+b;i++){
        ans+=i;
    }
    return ans;
    }
};
