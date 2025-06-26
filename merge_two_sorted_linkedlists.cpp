class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode dummy(0);
            ListNode *res=&dummy;
            ListNode *one=list1,*two=list2;
            while(one&&two)
            {
                if(one->val < two->val)
                {
                    res->next=one;
                    one=one->next;
                }
                else
                {
                    res->next=two;
                    two=two->next;
                }
                res=res->next;
            }
            if(one) res->next=one;
            if(two) res->next=two;
            return dummy.next;
        }
    };