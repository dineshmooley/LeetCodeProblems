class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* p = head;
        ListNode* q = head;
        
        if(head == NULL || head -> next == NULL)    {
            return false;
        }
        do  {
            p = p->next;
            q = q->next;
            if(q){
                q =q->next;
            }
        }while(p && q && p!=q);
        if(p == q)  {
            return true;
        }
        return false;
    }
};
