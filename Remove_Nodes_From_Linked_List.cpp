class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* tmp=head;
        if(tmp==NULL || tmp->next==NULL)
        {
            return tmp;
        }
        ListNode* nxt=removeNodes(tmp->next);
        if(nxt->val > head->val){
            return nxt;
        }
        tmp->next=nxt;
        return tmp;
    }
};
