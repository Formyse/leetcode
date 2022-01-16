class Solution {
    ListNode* head;
public:
    Solution(ListNode* head) {
          this->head = head;
    }
    
    int getRandom() {
        int i = 1;
        int ans = 0;
        for(auto node = head;node;node = node->next){
            if(rand()%i == 0){
                ans = node->val;
            }
            i++;
        }
        return ans;
    }
};
