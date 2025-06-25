class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode *slow=head;
            int count=0;
            while(slow!=NULL)
            {
                count++;
                slow=slow->next;
            }
            slow=head;
            if(n==count)
            {
                return head->next;
            }
            int req=count-n-1;
            while(req--)
            {
                slow=slow->next;
            }
            slow->next=slow->next->next;
            return head;
        }
    };