//1st Approach

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* head = NULL;

        if(p == NULL) return q;
        if(q == NULL) return p;

        if(p->val<q->val)   {
            head = p;
            p = p->next;
        }
        else if(q->val<p->val)  {
            head = q;
            q=q->next;
        }
        else{
            head=p;
            p = p->next;
        }
        ListNode* ans = head;
        
        while(p && q)   {
            if(p->val < q->val) {
                ans->next = p;
                p = p -> next;
            }
            else if(q->val < p->val) {
                ans->next = q;
                q = q -> next;
            }
            else    {
                ans -> next = p;
                p = p->next;
            }
            ans = ans -> next;
        }

        while(p)    {
            ans -> next = p;
            p = p->next;
            ans = ans-> next;
        }

        while(q)    {
            ans -> next = q;
            q = q->next;
            ans = ans-> next;
        }

        return head;
    }
};

//2nd Approach

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*result=NULL;

        if(list1 == NULL)   return list2;
        if(list2 == NULL)   return list1;
        
        if(list1->val<list2->val)    {
            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        }
        else if(list2->val<list1->val)  {
            result = list2;
            result->next = mergeTwoLists(list1,list2->next);
        }
        else{
            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        }

        return result;

    }
};
