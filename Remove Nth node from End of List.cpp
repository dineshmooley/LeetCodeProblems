//1st Approach


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
        ListNode* q =NULL;;
        int count = 0;
        while(p)    {
            count++;
            p = p -> next;
        }
        p = head;

        count -= n;
        while(p && count--)    {
            q = p;
            p = p -> next;
        }

        if( p == head ) {
            ListNode* temp = head;
            head = head -> next;
            temp -> next = NULL;
        }
        else    {
            q -> next = p -> next;
        }
        return head;
    }
};

//2nd Approach


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
        ListNode* q = head;
        ListNode* r = NULL;

        if(head -> next == NULL || head == NULL)    {
            return NULL;
        }

        while( p && n-- )  {
            p = p -> next;
        }

        while(p)    {
            r = q;
            p = p -> next;
            q = q -> next;
        }

        if(q == head)   {
            ListNode* temp = head;
            head = head -> next;
            temp -> next = NULL;
        }
        else    {
            r -> next = q -> next;
        }
        return head;
    }
};
