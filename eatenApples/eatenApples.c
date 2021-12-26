typedef pair<int,int> pii;
class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    int ans=0;
    int n=days.size();
    int i=0;
    while(i<n){
        while(!pq.empty()&&pq.top().first<=i){
            pq.pop();
        }
        int count = apples[i];
        int Endday = i+days[i];
        if(count>0){
            pq.emplace(Endday,count);
        }
        if(!pq.empty()){
            pii curr = pq.top();
            pq.pop();
            curr.second--;
            if(curr.second!=0){
                pq.emplace(curr.first,curr.second);
            }
            ans++;
        }
        i++;
    }
    while(!pq.empty()){
        while(!pq.empty()&&pq.top().first<=i){
            pq.pop();
        }
        if(pq.empty()){
            break;
        }
        pii curr = pq.top();
        pq.pop();
        int num = min(curr.first-i,curr.second);
        ans+=num;
        i+=num;
    }
    return ans;
    }
};
