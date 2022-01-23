class Solution {
public:
    int getMinute(string& str){
        return (int(str[0]-'0')*10+int(str[1]-'0'))*60+int(str[3]-'0')*10+int(str[4]-'0');
    }
    int findMinDifference(vector<string>& timePoints) {
    int n = timePoints.size();
    if(n > 1440){
        return 0;
    }
    sort(timePoints.begin(),timePoints.end());
    int t0Minute = getMinute(timePoints[0]);
    int preMinute = t0Minute;
    int ans = INT_MAX;
    for(int i = 1;i < n;i++){
        int minute = getMinute(timePoints[i]);
        ans = min(ans,minute - preMinute);
        preMinute = minute;
    }
    ans = min(ans,t0Minute+1440-preMinute);
    return ans;
    }
};
