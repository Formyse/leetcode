class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* temp;
    ListNode* pre=NULL;
    ListNode* cur=head;
    while(cur){
        temp=cur->next; //保存下一节点
        cur->next=pre;  //翻转
        pre=cur;  //更新pre和cur
        cur=temp;
    }
    return pre;
    }
};
