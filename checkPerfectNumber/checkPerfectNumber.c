class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 0;
        if(num == 1){
            return false;
        }
    for(int i = 1;i<=sqrt(num);i++){
        if(num%i==0){
            ans=ans+i+num/i;
        }
    }
    if(ans-num == num){
        return true;
    }
    else{
        return false;
    }
    }
};
