//1st Approach

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        vector<int> ans;

        while(p)    {
            ans.push_back(p->val);
            p = p->next;
        }

        reverse(ans.begin(), ans.end());

        ListNode* prev = NULL;
        ListNode* ans1 = NULL;
        int n = ans.size();
        for(int i=0;i<n;i++)    {
            ListNode* t = new ListNode(ans[i]);
            if( i == 0 )    {
                ans1 = t;
                prev = t;

            }
            else{
                prev -> next = t;
                prev = t;
            }
        }
        return ans1;

    }
};

//2nd Approach

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;

        while(p)  {
            r = q;
            q = p;
            p = p -> next;
            q ->next = r;
        }
        return q;
    }
};

