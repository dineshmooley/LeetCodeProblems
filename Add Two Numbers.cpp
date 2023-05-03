//1st Approach


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*p = l1;
        ListNode*q = l2;
        ListNode*ans = NULL;
        ListNode*last = NULL;
        int carry=0;
        int flag=0;
        while(p||q||carry) {
            int sum=0;
            if(p)   {
                sum =sum+p->val;
            }
            if(q)   {
                sum = sum + q->val;
            }
            sum = sum + carry;
            carry=sum/10;

            if(flag==0) {
                ListNode* t = new ListNode(sum%10);
                ans = t;
                last = t;
                flag = 1;
            }
            else{
                ListNode* t = new ListNode(sum%10);
                last->next = t;
                last =t;
            }   
            if(p){
                p= p->next;
            }
            if(q)   {
                q = q->next;
            }
        }
        return ans;
    }
};

//2nd Approach


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* ans = NULL;
        ListNode* last = NULL;
        int carry = 0;
        int flag = 0;

        while(p||q||carry)  {
            int sum = 0;

            if(p)   {
                sum = sum + p->val;
            }
            if(q)   {
                sum = sum + q->val;
            }
            
            sum = sum + carry;
            carry = sum / 10;

            if(flag == 0)   {
                ListNode* t = new ListNode (sum%10) ;
                ans = t;
                last = t;
                flag = 1;
            }
            else    {
                ListNode* t = new ListNode (sum % 10) ;
                last->next = t;
                last = t;   
            }

            if(p){
                p = p->next;
            }

            if(q)   {
                q = q->next;
            }
            
        }
        return ans;       
    }
};
