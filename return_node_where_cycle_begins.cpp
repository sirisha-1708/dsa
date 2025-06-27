class Solution {
    public:
        ListNode *detectCycle(ListNode *head) {
            ListNode *slow=head,*fast=head;
            while(fast && fast->next)
            {
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast)
                {
                    break;
                }
            }
            if(!fast || !fast->next) return nullptr;
            slow=head;
            while(fast!=slow)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
    };