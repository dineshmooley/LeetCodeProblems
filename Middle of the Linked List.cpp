//1st Approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        int count = 0;
        while(p){
            count++;
            p = p -> next;
        }
       
        p = head;
        int mid = count/2;
        while(mid--)  {
            p = p ->next;
        }
        
        return p;
    }
};

//2nd Approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;

        while(p -> next)    {
            p = p -> next;
            if(p -> next)   {
                p = p -> next;
            }
            q = q -> next;        
        }

        return q;
    }
};
