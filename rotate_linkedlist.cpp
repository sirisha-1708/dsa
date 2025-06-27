class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if(!head) return head;
            ListNode *temp=head;
            int count=0;
            while(temp)
            {
                count++;
                temp=temp->next;
            }
            if(count<=k)
            {
                k=k%count;
            }
            if(k==0) return head;
            temp=head;
            int req=count-k-1;
            while(req--)
            {
                temp=temp->next;
            }
            ListNode *help=temp->next;
            temp->next=NULL;
            ListNode *res=help;
            while(help->next)
            {
                help=help->next;
            }
            help->next=head;
            return res;
        }
    };