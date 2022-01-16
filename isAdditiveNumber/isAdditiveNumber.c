class Solution {
public:
    bool check(string& num,long pre,long next,int now,int n){
        if(now == n) return true;
        for(int i = now;i < n;i++){
           if(num[now] == '0' && i > now) return false;
           long c = stoll(num.substr(now,i-now+1));
           if(c > pre + next) return false;
           if(c == pre + next){
               if(check(num,next,c,i+1,n)){
                   return true;
               }
           }
        }
        return false;
    }
    bool isAdditiveNumber(string num) {
    int n = num.size();
    for(int i = 0;i < n/2;i++){
        if(num[0] == '0' && i > 0)  return false;
        for(int j = i + 1;j < i+1+(n-i-1)/2;j++){
            if(num[i+1] == '0' && j > i+1) break;
            long a = stoll(num.substr(0,i+1));
            long b = stoll(num.substr(i+1,j-i));
            if(check(num,a,b,j+1,n)) return true;
        }
    }
    return false;
    }
};
