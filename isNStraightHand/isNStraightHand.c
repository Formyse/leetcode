class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    if(hand.size()%groupSize!=0){
    return false;
    }
    sort(hand.begin(),hand.end());
    unordered_map<int,int>cnt;
    for(auto & num : hand){
        cnt[num]++;
    }
    for(auto & x : hand){
        if(!cnt.count(x)){
        continue;
        }
        for(int j = 0; j < groupSize; j++){
            int temp = x + j;
            if(!cnt.count(temp)){
            return false;
            }
            cnt[temp]--;
            if(cnt[temp]==0)
            cnt.erase(temp);
        }
    }
    return true;
    }
};
